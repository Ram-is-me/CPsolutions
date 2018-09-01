#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  int q;
  cin>>n;
  cin>>q;
  long long strength[300000];
  long long arrows[300000];
  for(long i=0;i<n;i++)
  {
    cin>>strength[i];
  }
  for(long i=0;i<q;i++)
  {
    cin>>arrows[i];
  }
  long long tempstrength[300000];
  for(long i=0;i<n;i++)
  {
    tempstrength[i]=strength[i];
  }
  long long position=0;
  long long arrowpos=0;
  long long noofarrows=0;
  long long totalstr = 0;
  for(long i=0;i<n;i++)
  totalstr+=strength[i];
  long long remstr=totalstr;
  while(arrowpos<q)
  {
    if(noofarrows==0)
    noofarrows=arrows[arrowpos++];
    if(noofarrows>=remstr)
    {
      cout<<n<<endl;
      noofarrows=0;
      position=0;
      remstr=totalstr;
      for(int i=0;i<n;i++)
      {
        tempstrength[i]=strength[i];
      }
      continue;
    }
    while(noofarrows>0)
    {
      if(noofarrows>tempstrength[position])
      {
        // noofarrows-=tempstrength[position];
        // tempstrength[position]=0;
        // position++;
        while(position!=n && noofarrows>tempstrength[position])
        {
          noofarrows-=tempstrength[position];
          remstr-=tempstrength[position];
          tempstrength[position]=0;
          position++;
        }
        if(position==n)
        {
          noofarrows=0;
          cout<<n<<endl;
          position=0;
          remstr=totalstr;
          for(int i=0;i<n;i++)
          {
            tempstrength[i]=strength[i];
          }
          continue;
        }
        if(noofarrows<tempstrength[position])
        {
          tempstrength[position]-=noofarrows;
          remstr-=noofarrows;
          noofarrows=0;
          cout<<n-position<<endl;
        }
      }
      else if(noofarrows<tempstrength[position])
      {
        tempstrength[position]-=noofarrows;
        remstr-=noofarrows;
        noofarrows=0;
        cout<<n-position<<endl;
      }
      else
      {
        tempstrength[position]=0;
        position++;
        remstr-=noofarrows;
        noofarrows=0;
        if(position==n)
        {
          noofarrows=0;
          cout<<n<<endl;
          position=0;
          remstr=totalstr;
          for(int i=0;i<n;i++)
          {
            tempstrength[i]=strength[i];
          }
          continue;
        }
        else
        {
          cout<<n-position<<endl;
        }
      }
    }
  }
  return 0;
}
//This is like brute force method, useless

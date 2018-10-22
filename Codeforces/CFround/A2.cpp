#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,a,b;
  cin>>n;
  cin>>a;
  cin>>b;
  // cout<<n;
  int state[100];
  // int statepos=0;
  for(int i=0;i<n;i++)
  {
    cin>>state[i];
    // statepos
  }
  int price=0;
  int l1=0,l2=n-1;
  while(l1<l2)
  {
    if(state[l1]==2&&state[l2]!=2)
    {
      if(state[l2]==0) {
        price+=a;
        state[l1]=0;
      }
      else {
        price+=b;
        state[l1]=1;
      }
    }
    else if(state[l2]==2&&state[l1]!=2)
    {
      if(state[l1]==0) {
        price+=a;
        state[l2]=0;
      }
      else {
        price+=b;
        state[l2]=1;
      }
    }
    else if(state[l1]==2&&state[l2]==2)
    {
      int o=0;
      int temp=state[o];
      while(temp==2&&o<n)
      {
        temp=state[o];
        o++;
      }
      // cout<<endl<<o<<endl;
      if(o==n && temp==2)
      {
        // cout<<"lol";
        if(n%2==0)
        {
          cout<<n/2*a+n/2*b;
          return 0;
        }
        else
        {
          cout<<n/2*a+n/2*b+min(a,b);
          return 0;
        }
      }
      o--;
      if(o%2==0)
      {
        if(temp==0)
        {
          if(l1%2==0) {
            price+=2*a;
            state[l1]=0;
            state[l2]=0;
          }
          else {
            price+=2*b;
            state[l1]=1;
            state[l2]=1;
          }
        }
        else
        {
          if(l1%2==0) {
            price+=2*b;
            state[l1]=1;
            state[l2]=1;
          }
          else {
            price+=2*a;
            state[l1]=0;
            state[l2]=0;
          }
        }
      }
      else
      {
        if(temp==0)
        {
          if(l1%2==1) {
            price+=2*a;
            state[l1]=0;
            state[l2]=0;
          }
          else {
            price+=2*b;
            state[l1]=1;
            state[l2]=1;
          }
        }
        else
        {
          if(l1%2==1) {
            price+=2*b;
            state[l1]=1;
            state[l2]=1;
          }
          else {
            price+=2*a;
            state[l1]=0;
            state[l2]=0;
          }
        }
      }
    }
    else
    {
      if(state[l1]!=state[l2])
      {
        cout<<-1;
        return 0;
      }
    }
    l1++;
    l2--;
  }
  if(n%2==1)
  {
    int mid=n/2;
    if(state[mid]==2)
    {
      if(a<b)
      {
        price+=a;
        state[mid]=0;
      }
      else
      {
        price+=b;
        state[mid]=1;
      }
    }
    int i=0;
    while(i<n/2)
    {
      if(state[i]==state[i+1]&&i+1!=n/2)
      {
        cout<<-1;
        return 0;
      }
    i++;
    }
  }
  else
  {
    int i=0;
    while(i<n/2)
    {
      if(state[i]==state[i+1])
      {
        cout<<-1;
        return 0;
      }
      i++;
    }
  }
  cout<<price;
  return 0;
}

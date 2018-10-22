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
  while(l1<=l2)
  {
    if(state[l1]==state[l2])
    {
      if(state[l1]==2)
      {
        if(l1==l2)
        {
          if(a<b)
          {
            price+=a;
            state[l1]=0;
          }
          else
          {
            price+=b;
            state[l1]=1;
          }
          continue;
        }
        int temp,temptog=0;
        temp=state[l1+1];
        int var=l1+1;
        while(temp!=2&&var<n)
        {
          temp=state[var++];
          if(temptog==0) temptog==1;
          else temptog=0;
        }
        if(temp==0)
        {
          //1 is same 0 is different
          if(temptog==1) price+=a;
          else price+=b;
        }
        else
        {
          if(temptog==1) price+=b;
          else price+=a;
        }
      }
    }
    else if(state[l1]==2 && state[l2]!=2)
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
    else if(state[l2]==2 && state[l1]!=2)
    {
      if(state[l1]==0) {
        price+=a;
        state[l1]=0;
      }
      else {
        price+=b;
        state[l1]=1;
      }
    }
    else if(state[l1]!=state[l2])
    {
      cout<<-1;
      return 0;
    }
    l1++;
    l2--;
  }
  int k1=0;
  while(k1<n-1)
  {
    if(state[k1]==state[k1+1])
    {
      if(k1!=n/2-1&&k1!=n/2)
      {
        cout<<-1;
        return 0;
      }
    }
    k1++;
  }
  cout<<price;
  return 0;
}

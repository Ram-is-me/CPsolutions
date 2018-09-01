#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n;
  cin>>m;
  int q,r;
  r=n%5;
  if(r>0)
  q=n/5+1;
  else
  q=n/5;
  int arr1[2230],arr2[2230];
  for(int i=0;i<q;i++)
  {
    arr1[i]=5;
  }
  for(int j=0;j<q;j++)
  {
    arr2[j]=5;
  }
  for(int i=0;i<q;i++)
  {
    cout<<5;
  }
  cout<<endl;
  for(int j=0;j<q;j++)
  {
    cout<<5;
  }
  return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  // cout<<n;
  int marks[100]={0};
  // for(int i=0;i<100;i++)
  // marks[i]=0;
  for(int i=0;i<n;i++)
  cin>>marks[i];
  sort(marks,marks+n);
  // for(int i=0;i<n;i++)
  // cout<<marks[i]<<endl;
  int dismarks[100]={0};
  int dismarkspos=0;
  for(int i=0;i<n-1;i++)
  if(marks[i]!=marks[i+1])
  dismarks[dismarkspos++]=marks[i];
  long counter=0;
  for(int j=n-1;j>=0;j--)
  {
    if(dismarks[j]>0)
    {
      counter++;
    }
  }
  cout<<counter+1;
  return 0;
}

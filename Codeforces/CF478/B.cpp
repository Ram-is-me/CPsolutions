#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long boxes[14]={0};
  long long tboxes[14]={0};
  for(int i=0;i<14;i++)
  {
    cin>>boxes[i];
    tboxes[i]=boxes[i];
  }
  long long mscore[14]={0};
  for(int choice=0;choice<14;choice++)
  {
    if(tboxes[choice]==0) continue;
    if(tboxes[choice]<14)
    {
      for(int j=choice+1,count=0;count<tboxes[choice];count++,j++)
      {
        if(j==14) j=0;
        tboxes[j]++;
      }
      tboxes[choice]=0;
      for(int q=0;q<14;q++)
      if(tboxes[q]%2==0)
      mscore[choice]+=tboxes[q];
    }
    else
    {
      long long multiple = tboxes[choice]/14;
      long long rem = tboxes[choice]%14;
      tboxes[choice]=0;
      for(int q=0;q<14;q++)
      tboxes[q]+=multiple;
      for(int j=choice+1,count=0;count<rem;count++,j++)
      {
        if(j==14) j=0;
        tboxes[j]++;
      }
      for(int q=0;q<14;q++)
      if(tboxes[q]%2==0)
      mscore[choice]+=tboxes[q];
    }
    for(int i=0;i<14;i++)``
    {
      // cout<<tboxes[i]<<'\t';
      tboxes[i]=boxes[i];
    }
    // cout<<endl;
  }
  long long maxscore=0;
  for(int i=0;i<14;i++)
  {
    if(maxscore<mscore[i])
    maxscore=mscore[i];
  }
  cout<<maxscore;
  return 0;
}

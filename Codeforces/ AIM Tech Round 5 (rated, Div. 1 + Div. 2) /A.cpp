#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n;
  cin>>m;
  int arr[120][120];
  char temp;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      cin>>temp;
      if(temp=='W')
      arr[i][j]=1;
      else
      arr[i][j]=0;
    }
  }
  int ans1,ans2;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      if(arr[i][j]==0)
      {
        int temp=j;
        while(temp<m)
        {
          if(arr[i][temp]==1)
          break;
          else
          temp++;
        }
        int length=temp-j;
        length=length/2;
        ans1=i+length;
        ans2=j+length;
        cout<<ans1+1<<" "<<ans2+1;
        return 0;
      }
    }
  }
  return 0;
}

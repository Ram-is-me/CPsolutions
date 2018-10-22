#include<bits/stdc++.h>
using namespace std;
int main()
{
  long n;
  cin>>n;
  vector<tuple<int,int>> v;
  long temp1,temp2;
  for(long i=0;i<n;i++)
  {
    cin>>temp1;
    cin>>temp2;
    v.push_back(make_tuple(temp1,temp2));
  }
  vector<tuple<int,int>> v2;
  for(long i=0;i<n;i++)
  {
    v2.push_back(v[i])
  }

  sort(v2.begin(),v2.end());

  
  return 0;
}

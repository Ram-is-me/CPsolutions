#include<bits/stdc++.h>
using namespace std;
long long largest(long long x, long long y, long long z)
{
  long long k = max(x,y);
  long long q = max(k,z);
  if(q==x) return 1;
  else if(q==y) return 2;
  else return 3;
}
int main()
{
  long long r,g,b;
  cin>>r;
  cin>>g;
  cin>>b;
  // long long long long long long answer=0;
  long long sum=r+g+b;
  sum/=3;
  long long z=largest(r,g,b);
  long long ans2;
  if(z==1)
  {
    ans2=g+b;
  }
  else if(z==2)
  {
    ans2=r+b;
  }
  else
  {
    ans2=r+g;
  }
  cout<<min(sum,ans2);
  return 0;
}

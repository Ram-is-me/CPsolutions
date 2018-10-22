#include<bits/stdc++.h>
using namespace std;
int smallest(int x, int y, int z)
{
  return min(min(x, y), z);
}
int main()
{
  long r,g,b;
  cin>>r;
  cin>>g;
  cin>>b;
  long answer=0;
  answer=smallest(r,g,b);
  int svar=3;
  if(answer==r)
  {
    svar=1;
  }
  else if(answer==g)
  {
    svar=2;
  }
  if(svar==1)
  {
    g-=r;
    b-=r;
    r=0;
    if(g+b<3)
    {
      cout<<answer;
      return 0;
    }
    else
    {
      // answer+=min(g,b);
      long n2=(g+b)/3;
      answer+=min(n2,min(g,b));
      cout<<answer;
      return 0;
    }
  }
  else if(svar==2)
  {
    r-=g;
    b-=g;
    g=0;
    if(r+b<3)
    {
      cout<<answer;
      return 0;
    }
    else
    {
      // answer+=min(r,b);
      long n2=(r+b)/3;
      answer+=min(min(r,b),n2);
      cout<<answer;
      return 0;
    }
  }
  else
  {
    r-=b;
    g-=b;
    b=0;
    if(r+g<3)
    {
      cout<<answer;
      return 0;
    }
    else
    {
      // answer+=min(r,g);
      long n2=(r+g)/3;
      answer+=min(min(r,g),n2);
      cout<<answer;
      return 0;
    }
  }
  return 0;
}

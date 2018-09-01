#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long k,d,t;
  cin>>k;
  cin>>d;
  cin>>t;
  if(k%d==0)
  cout<<t;
  else if(k>d)
  {
    long double chickencycle,realcycle;
    long double kbyd = (long double)k/d;
    kbyd=ceil(kbyd);
    realcycle = kbyd*d;
    chickencycle = k;
    chickencycle += (d-(k%d))/2.0;
    long double noofchickencycle = t/chickencycle;
    noofchickencycle = floor(noofchickencycle);
    long double chickentime = noofchickencycle*chickencycle;
    long double realtime = noofchickencycle*realcycle;
    cout<<chickentime<<endl;
    if(t-chickentime<=d)
    {
      chickentime+=t-chickentime;
      realtime+=t-chickentime;
    }
    else
    {
      chickentime+=d;
      realtime+=d;
      realtime+=(t-chickentime)*2.0;
    }
    cout<<realtime;
  }
  else if(k<d)
  {

  }
  return 0;
}

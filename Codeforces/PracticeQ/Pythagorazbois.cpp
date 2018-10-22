#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long n;
  cin>>n;
  long long m,h;
  if(n%2==0)
  {
    long long prod=n/2;   //Euclids algorithm, one of the non-hypotenuse has to be even, so I assume this is even
    m=prod*prod-1;
    h=prod*prod+1;
  }
  else
  {
    // long long prod=n+1;
    m=(n*n-1)/2;  //This is a general formula, works for all, assuming the prod's factors are co-prime, which is not a worry as we take prod and 1
    h=(n*n+1)/2;
  }
  if(m==0||n==0)
  {
    cout<<-1<<endl;
    return 0;
  }
  cout<<m<<" "<<h<<endl;
  return 0;
}
// n-1
// n+1
// n^2 -n +1 n^2 +n + 1
// 2n^2+2

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,x,y;
    cin>>a;
    cin>>b;
    cin>>x;
    cin>>y;
    long long nu,de;
    long long gcd1;
    gcd1 = __gcd(x,y);
    x/=gcd1;
    y/=gcd1;
    // cout<<gcd1<<endl;
    nu = a/x;
    de=b/y;
    cout<<min(nu,de);
    return 0;
}
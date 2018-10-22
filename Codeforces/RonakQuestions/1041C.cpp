//Important Implementation Question, which is very good
#include<bits/stdc++.h>
using namespace std;
const int N = 200100;
set<pair<int,int> > q;
int ans[N],n,a[N],m,k;
int main()
{
    // long long n,m,k;
    cin>>n;
    cin>>m;
    cin>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        cout<<n,m,k;
        q.insert({a[i],i});
    }
    int cnt = 0;
    while(!q.empty()) {
        ++cnt;
        int pos = q.begin() ->second;
        ans[pos] = cnt;
        q.erase(q.begin());
        while(true) {
            auto it = q.lower_bound({a[pos]+1+k,0});
            if(it==q.end())
                break;
            pos = it->second;
            q.erase(it);
            ans[pos] = cnt;
        }
    }
    cout<<cnt<<"\n";
    for(int i=1;i<=n;i++)
        cout<<ans[i]<<' ';
    return 0;
}
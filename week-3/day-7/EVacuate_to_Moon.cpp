/*
* author: saifabrar
* created: 2024-04-04 05:39:38
* problem link: https://www.codechef.com/problems/MOONSOON
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl  '\n'
#define pii pair<ll,ll>
int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie(0);
    cout.tie(0);
    
    int t;cin>>t;
    while(t--)
    {
        ll n,m,h;cin>>n>>m>>h;

        vector<ll>a(n),b(m);

        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];

        sort(a.begin(),a.end(),greater<ll>());
        sort(b.begin(),b.end(),greater<ll>());

        ll ans = 0;

        for(int i=0;i<min(n,m);i++)
            ans+=min(a[i],b[i]*h);
        

        cout<<ans<<nl;
    }
    return 0;
}
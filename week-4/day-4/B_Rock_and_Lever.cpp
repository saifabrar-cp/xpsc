/*
* author: saifabrar
* created: 2024-04-15 15:08:52
* problem link: 
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
        int n;cin>>n;
        map<int,int> mp;

        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            mp[__lg(x)]++;
        }

        ll ans = 0;
        for(auto [x,y]:mp)
        {
            ans+=((1LL * y * (y-1)) / 2);
        }
        cout<<ans<<nl;
    }
    return 0;
}
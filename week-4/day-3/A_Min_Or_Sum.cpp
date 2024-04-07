/*
* author: saifabrar
* created: 2024-04-07 23:12:23
* problem link: https://codeforces.com/problemset/problem/1635/A
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
        int x,ans=0;
        for(int i=1;i<=n;i++)
        {
            cin>>x;
            ans |= x;
        }
        cout<<ans<<nl;
    }
    return 0;
}
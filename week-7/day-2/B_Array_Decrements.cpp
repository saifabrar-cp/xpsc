/*
 * author: saifabrar
 * created: 2024-05-04 12:14:01
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n;cin>>n;
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    ll l=0,r = LONG_MAX;
    for(int i=0;i<n;i++)
    {
        if(b[i] == 0) l = max(l,a[i]);
        else
        {
            l = max(l,a[i]-b[i]);
            r = min(r,a[i]-b[i]);
        }
    }
    cout<<(l<=r ? "YES" : "NO")<<nl;
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
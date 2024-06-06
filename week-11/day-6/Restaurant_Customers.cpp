/*
 * author: saifabrar
 * created: 2024-06-06 15:52:39
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    ll n;
    cin >> n;
    vector<pii> v;
    for(ll i = 0; i < n; i++){
        ll x, y;
        cin >> x >> y;
        v.push_back({x, 1});
        v.push_back({y, -1});
    }
    sort(v.begin(), v.end());
    ll cnt = 0,mx = 0;
    for(ll i = 0; i < 2 * n; i++){
        cnt += v[i].second;
        mx = max(mx, cnt);
    }
    cout << mx << nl;
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
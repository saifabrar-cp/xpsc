/*
 * author: saifabrar
 * created: 2024-05-27 20:27:19
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
    vector<ll> a(n);
    for (ll i = 0;i < n;i++) {
        cin >> a[i];
    }
 
    vector<vector<ll>> v;
    for (ll i = 0;i < (n - 2);i++) {
        v.push_back({ a[i],a[i + 1],a[i + 2] });
    }
 
    map<pair<ll, ll>, ll> c1, c2, c3;
    map<pair<pair<ll, ll>, ll>, ll> cnt2;
    for (ll i = 0;i < v.size();i++) {
        c1[{v[i][0], v[i][1]}]++;
        c2[{v[i][0], v[i][2]}]++;
        c3[{v[i][1], v[i][2]}]++;
        cnt2[{{v[i][0], v[i][1]}, v[i][2]}]++;
    }
 
    ll ans = 0;
    for (ll i = 0;i < v.size();i++) {
        ll x, y, z;
        x = v[i][0], y = v[i][1], z = v[i][2];
        ll val1 = 0, val2 = 0, val3 = 0, tot = cnt2[{{x, y}, z}];
        val1 = c1[{x, y}] - tot;
        val2 = c2[{x, z}] - tot;
        val3 = c3[{y, z}] - tot;
        ans += (val1 + val2 + val3);
        cnt2[{{x, y}, z}]--;
        c1[{x, y}]--;
        c2[{x, z}]--;
        c3[{y, z}]--;   
    }
    cout << ans << nl;
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
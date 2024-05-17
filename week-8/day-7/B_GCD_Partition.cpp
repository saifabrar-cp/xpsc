/*
 * author: saifabrar
 * created: 2024-05-17 22:40:27
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
    vector<ll> v(n);
    for (ll i = 0;i < n;i++)
        cin >> v[i];
    ll tot = 0;
    for (ll i = 0;i < n;i++)
        tot += v[i];
    ll ans = 1;
    vector<ll> pref(n + 1);
    pref[1] = v[0];
    for (ll i = 2;i <= n;i++)
        pref[i] = (pref[i - 1] + v[i - 1]);
    for (ll i = 1;i < n;i++)
    {
        ll sum = pref[n] - pref[i];
        if (sum != 0 && tot != 0)
            ans = max(ans, __gcd(sum, tot));
    }
    cout << ans << '\n';
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
/*
 * author: saifabrar
 * created: 2024-05-03 19:32:19
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

ll k, n;
vector<ll> a(55);
bool good(ll x)
{
    ll slots = x * k;
    for (ll i = 0; i < n; i++)
        slots -= min(x, a[i]);
    return slots <= 0;
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> k >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll l = 0, r = 1;

    while (good(r))
    {
        r *= 2;
    }

    while (r > l + 1)
    {
        ll m = l + ((r - l) / 2);
        if (good(m))
            l = m;
        else
            r = m;
    }
    cout << l << nl;
    return 0;
}
/*
 * author: saifabrar
 * created: 2024-04-01 23:00:15
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        ll ans = 0, cnt = 0;

        for (ll x : a)
        {
            cnt = x <= q ? cnt + 1 : 0;
            ans += max(0 * 1LL, cnt - k + 1);
        }
        cout << ans << nl;
    }
    return 0;
}
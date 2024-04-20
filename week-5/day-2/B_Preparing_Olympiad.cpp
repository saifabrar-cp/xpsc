/*
 * author: saifabrar
 * created: 2024-04-20 23:06:33
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll ans = 0;
    for (int mask = 1; mask < (1 << n); mask++)
    {
        set<int> s;
        ll sum = 0;
        for (int bit = 0; bit < n; bit++)
        {
            if (mask & (1 << bit))
            {
                s.insert(a[bit]);
                sum += a[bit];
            }
        }
        bool ok = false;
        ok |= ((*s.rbegin() - *s.begin()) >= x);
        ans += (sum >= l && sum <= r && ok);
    }
    cout << ans << nl;
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
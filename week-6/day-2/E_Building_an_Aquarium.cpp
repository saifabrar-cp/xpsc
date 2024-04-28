/*
 * author: saifabrar
 * created: 2024-04-28 15:49:15
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll l = 1, r = 1e10 + 2;
    ll ans;

    while (l <= r)
    {
        ll mid = (l + r) / 2;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (mid > a[i])
                sum += (mid - a[i]);
        }
        if (sum <= x)
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
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
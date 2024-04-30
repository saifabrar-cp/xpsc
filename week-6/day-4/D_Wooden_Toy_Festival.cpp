/*
 * author: saifabrar
 * created: 2024-04-30 19:33:03
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    ll l = 0, r = 1e9;
    while (l < r)
    {
        ll mid = (l + r) / 2;
        ll idx = 0;
        for (int t = 0; t < 3 && idx < n; t++)
            idx = upper_bound(a.begin(), a.end(), 2LL * mid + a[idx]) - a.begin();
        if (idx == n)
            r = mid;
        else
            l = mid + 1;
    }
    cout << l << nl;
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
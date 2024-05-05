/*
 * author: saifabrar
 * created: 2024-05-05 22:52:44
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    ll ans = 0;
    for (int i = 0; i < n && a[i] < 0; i += k)
        ans += -a[i];
    for (int i = n - 1; i >= 0 && a[i] > 0; i -= k)
        ans += a[i];
    ans *= 2;
    ans -= max(abs(a[0]), abs(a[n - 1]));
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
/*
 * author: saifabrar
 * created: 2024-04-25 22:26:20
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.rbegin(), a.rend());
    vector<int> pre(n + 1);
    for (int i = 0; i < n; i++) {
        pre[i + 1] = pre[i] + a[i];
    }
    while (q--)
    {
        int x;
        cin >> x;
        int ans = lower_bound(pre.begin(), pre.end(), x) - pre.begin();
        if (ans > n)
            cout << -1 << nl;
        else
            cout << ans << nl;
    }

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
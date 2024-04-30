/*
 * author: saifabrar
 * created: 2024-04-30 21:14:26
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
    vector<int> a(n), cnt(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= n)
            cnt[a[i] - 1]++;
    }

    for (int i = 1; i < n; i++)
        cnt[i] += cnt[i - 1];

    int ans = n;

    for (int i = 0; i < n; i++)
        ans = min(ans, max(cnt[i] - i, i));

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
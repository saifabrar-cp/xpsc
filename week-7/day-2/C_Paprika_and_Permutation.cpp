/*
 * author: saifabrar
 * created: 2024-05-04 23:18:45
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
    vector<ll> a;
    vector<bool> v(n + 1, false);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x <= n && !v[x])
            v[x] = true;
        else
            a.push_back(x);
    }
    sort(a.begin(), a.end());
    int j = 0, ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!v[i])
        {
            ll temp = (a[j] - 1) - (a[j] / 2);
            j++;
            if (i > temp)
            {
                cout << -1 << nl;
                return;
            }
            ans++;
        }
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
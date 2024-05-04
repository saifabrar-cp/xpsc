/*
 * author: saifabrar
 * created: 2024-05-04 23:26:06
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
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 0; i < n; i++)
    {
        if (b[i] - a[i] == 0 || b[i] - a[i] == 1)
            continue;
        else
        {
            cout << "NO" << nl;
            return;
        }
    }
    cout << "YES" << nl;
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
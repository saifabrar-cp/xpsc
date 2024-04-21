/*
 * author: saifabrar
 * created: 2024-04-21 16:06:16
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    ll a, b, n;
    cin >> a >> b >> n;
    vector<ll> v(n);
    ll sum = b;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] + 1 <= a)
            sum += v[i];
        else
            sum += (a - 1);
    }
    cout << sum << nl;
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
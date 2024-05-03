/*
 * author: saifabrar
 * created: 2024-05-03 19:22:47
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

    ll n, x, y;
    cin >> n >> x >> y;
    if (n == 1)
    {
        cout << min(x, y) << nl;
        return 0;
    }

    ll l = 0, r = INT_MAX;
    while (r > l + 1)
    {
        ll m = (l + r) / 2;
        if (m / x + m / y >= n - 1)
            r = m;
        else
            l = m;
    }
    cout << r + min(x, y) << nl;
    return 0;
}
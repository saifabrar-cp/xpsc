/*
 * author: saifabrar
 * created: 2024-04-21 16:13:37
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int a, b, n, s;
    cin >> a >> b >> n >> s;
    (s % n <= b && 1ll * a * n + b >= s) ? cout << "YES" : cout << "NO";
    cout << nl;
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
/*
 * author: saifabrar
 * created: 2024-04-18 06:12:29",
 * problem link: https://codeforces.com/problemset/problem/1421/A
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    ll a, b;
    cin >> a >> b;
    cout << (a ^ b) << nl;
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
/*
 * author: saifabrar
 * created: 2024-04-18 06:22:53",
 * problem link: https://codeforces.com/problemset/problem/1559/A
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
    ll x = -1;
    while (n--)
    {
        ll v;
        cin >> v;
        x &= v;
    }
    cout << x << nl;
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
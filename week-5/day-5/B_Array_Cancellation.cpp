/*
 * author: saifabrar
 * created: 2024-04-23 15:58:36
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
    ll cur = 0;
    while (n--)
    {
        ll x;
        cin >> x;
        cur = max(0LL, cur + x);
    }
    cout << cur << nl;
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
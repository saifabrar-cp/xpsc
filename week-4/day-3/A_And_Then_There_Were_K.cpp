/*
 * author: saifabrar
 * created: 2024-04-07 23:04:55
 * problem link: https://codeforces.com/problemset/problem/1527/A
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

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll cnt = 0;
        while (n > 1)
        {
            n = n >> 1;
            cnt++;
        }
        cout << (1 << cnt) - 1 << nl;
    }
    return 0;
}
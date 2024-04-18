/*
 * author: saifabrar
 * created: 2024-04-18 19:15:50
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
    int p = 1;
    while ((p << 1) < n)
        p <<= 1;
    for (int i = p - 1; i >= 0; i--)
        cout << i << " ";
    cout << p << " ";
    for (int i = p + 1; i < n; i++)
        cout << i << " ";
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
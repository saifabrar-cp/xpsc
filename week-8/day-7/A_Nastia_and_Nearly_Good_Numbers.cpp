/*
 * author: saifabrar
 * created: 2024-05-17 22:46:20
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int a, b; cin >> a >> b;
    if (b == 1) 
        cout << "NO" << nl;
    else {
        cout << "YES" << nl;
        cout << a << ' ' << a * (long long)b << ' ' << a * (long long)(b + 1) << nl;
    }
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
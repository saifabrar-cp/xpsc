/*
 * author: saifabrar
 * created: 2024-05-20 19:59:55
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    ll y, x;
    cin >> y >> x;
    if(y > x)
    {
        if(y % 2)
            cout << (y - 1) * (y - 1) + 1 + (x - 1);
        else
            cout << y * y - (x - 1);
    }
    else
    {
        if(x % 2)
            cout << x * x - (y - 1);
        else
            cout << (x - 1) * (x - 1) + 1 + (y - 1);
    }
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
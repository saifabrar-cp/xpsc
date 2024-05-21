/*
 * author: saifabrar
 * created: 2024-05-21 20:02:30
 * problem link: 
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
    if(a > b) swap(a,b);
    if(2 * a < b)
        cout << "NO" << nl;
    else
    {
        a %= 3, b %= 3;
        if((a == 2 && b == 1) || (a == 0 && b == 0) || (a== 1 && b == 2))
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
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
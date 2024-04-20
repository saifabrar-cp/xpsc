/*
 * author: saifabrar
 * created: 2024-04-20 19:34:18
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    ll a, b, c; cin>>a>>b>>c;
    a--;
    b = abs(b-c) + c - 1;
    cout<<( a < b ? 1 : a > b ? 2 : 3) << nl;
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
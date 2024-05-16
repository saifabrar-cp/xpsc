/*
 * author: saifabrar
 * created: 2024-05-16 22:23:56
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
    while(__gcd(a,b)!=1) 
    {
        ll x = __gcd(a,b);
        b/=x;
        if(b==1) break;
    }
    cout << (b == 1 ? "Yes" : "No") << nl;
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
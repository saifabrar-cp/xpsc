/*
* author: saifabrar
* created: 2024-05-14 20:47:39
* problem link: 
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl  '\n'
#define pii pair<ll,ll>
int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie(0);
    cout.tie(0);
    
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll red = (n / a) * p;
    ll blue = (n / b) * q;
    ll same = n / ((a / __gcd(a, b)) * b);
    ll ans = (red + blue) - (same * (p + q)) + (same * max(p, q));
    cout << ans << nl;
    return 0;
}
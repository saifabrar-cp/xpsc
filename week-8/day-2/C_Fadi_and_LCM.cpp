/*
* author: saifabrar
* created: 2024-05-12 19:35:42
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
    
    ll x;
    cin >> x;
    ll ans = 1;
    for(ll i = 1; i * i <= x; i++)
    {
        if(x % i == 0 && __gcd(i, x / i) == 1)
            ans = i;
    }
    cout << ans << " " << x / ans << nl;
    return 0;
}
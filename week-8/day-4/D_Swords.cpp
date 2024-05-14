/*
* author: saifabrar
* created: 2024-05-14 22:07:39
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
    
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());

    if(n == 2)
        cout << 1 << " " << a[1] - a[0];
    else
    {
        ll sum = 0;
        ll mn = (a[n - 1] - a[0]);
        for(int i = 0; i < n; i++)
        {
            sum += abs(a[i] - a[n - 1]);
            mn = __gcd(mn, a[n - 1] - a[i]);
        }
        cout << sum / mn <<" "<< mn << nl;
    }
    return 0;
}
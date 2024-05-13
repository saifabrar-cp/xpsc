/*
* author: saifabrar
* created: 2024-05-13 20:23:18
* problem link: 
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl  '\n'
#define pii pair<ll,ll>
const ll N = 1e5 + 5;
int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie(0);
    cout.tie(0);
    
    ll n;
    cin >> n;
    vector<ll> v1(N);
    vector<bool> v2(N, true);
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v1[x]++;
    }
    ll ans = 1;
    for(ll i = 2; i < N; i++)
    {
        if(v2[i])
        {
            ll c = 0;
            for(int j = i; j < N; j += i)
            {
                v2[j] = false;
                c += v1[j];
            }
            ans = max(ans, c);
        }
    }
    cout << ans << nl;
    return 0;
}
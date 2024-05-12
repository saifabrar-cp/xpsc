/*
* author: saifabrar
* created: 2024-05-12 16:08:24
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
    
    ll n, k;
    cin >> n >> k;

    vector<ll> ans;

    for(ll i = 1; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            ans.push_back(i);
            if(n / i != i)
                ans.push_back(n / i);
        }
    }
    sort(ans.begin(), ans.end());
    cout << (k <= ans.size() ? ans[k-1] : -1) << nl;
    return 0;
}
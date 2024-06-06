/*
* author: saifabrar
* created: 2024-06-06 15:44:37
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
    
    ll n, q, sum = 0;
    cin >> n >> q;
    vector<ll> input(n), query(n + 1);
    for(int i = 0; i < n; i++)
        cin >> input[i];
    for(int i = 0; i <= n; i++)
        query[i]=0;
    for(int i = 0; i < q; i++)
    {
        ll l, r;
        cin >> l >> r;
        query[l - 1] += 1;
        query[r] -= 1;
    }
    for(int i = 1; i < n; i++)
        query[i] += query[i - 1];
    sort(input.rbegin(), input.rend());
    sort(query.rbegin(), query.rend());
    for(int i = 0; i < n; i++)
        sum += (query[i] * input[i]);
    cout << sum << nl;
    return 0;
}
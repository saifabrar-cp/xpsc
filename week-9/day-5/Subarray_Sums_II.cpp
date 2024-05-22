/*
* author: saifabrar
* created: 2024-05-22 21:29:19
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
    
    ll n, s;
    cin >> n >> s;
    vector<ll> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    map<ll, ll> mp;
    ll sum = 0, cnt = 0;
    mp[sum]++;
    for(int i = 0; i < n; i++)
    {
        sum += a[i];
        cnt += mp[sum - s];
        mp[sum]++;
    }
    cout << cnt;
    return 0;
}
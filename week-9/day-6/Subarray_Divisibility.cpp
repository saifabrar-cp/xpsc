/*
* author: saifabrar
* created: 2024-05-23 23:27:43
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
        cin>>a[i];
    map<ll,ll>mp;
    ll sum=0;
    ll cnt=0;
    mp[sum]++;
    for(int i = 0; i < n; i++)
    {
        sum += a[i];
        sum %= n;
        if(sum < 0) sum += n;
        cnt += mp[sum];
        mp[sum]++;
    }
    cout << cnt;
    return 0;
}
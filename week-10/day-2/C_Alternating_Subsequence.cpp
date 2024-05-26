/*
 * author: saifabrar
 * created: 2024-05-26 20:08:56
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

bool sign(ll n){
    return n > 0;
}

void solve()
{
    ll n, ans=0;
    cin >> n;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++){
        ll j=i;
        ll mx=a[i];
        while(j<n&&sign(a[i])==sign(a[j])){mx=max(mx,a[j]);j++;}
        i=j-1;ans+=mx;
    }
    cout<<ans<<nl;
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
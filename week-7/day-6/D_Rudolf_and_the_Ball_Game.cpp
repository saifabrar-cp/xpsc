/*
 * author: saifabrar
 * created: 2024-05-08 23:15:42
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    ll n,m,k;cin>>n>>m>>k;
    vector<ll>a(n),b(n);
    for(ll i=0;i<n;i++){
        a[i]=0;
    }
    a[k-1]=1;
    while(m--){
        ll x;cin>>x;
        char c;cin>>c;
        for(ll i=0;i<n;i++){
            b[i]=0;
        }
        for(ll i=0;i<n;i++){
            if(a[i]==0)continue;
            if(c=='?'||c=='0')b[(i+x)%n]=1;
            if(c=='?'||c=='1')b[(n+(i-x))%n]=1;
        }
        a=b;
    }
    ll cnt=0;
    for(ll val:a)if(val==1)cnt++;
    cout<<cnt<<nl;
    for(ll i=0;i<n;i++){
        if(a[i])cout<<i+1<<" ";
    }
    cout<<nl;
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
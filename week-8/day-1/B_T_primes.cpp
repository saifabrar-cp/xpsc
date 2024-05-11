/*
* author: saifabrar
* created: 2024-05-11 23:10:39
* problem link: 
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl  '\n'
#define pii pair<ll,ll>
bool prime(int a){
    if (a == 1 || a == 0)
        return false;
    for (int i=2; i*i <= a; i++)
        if (a % i == 0)
            return false;
    return true;
}
int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie(0);
    cout.tie(0);

    ll n;cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
        ll x=sqrt(a[i]);
        if(x*x==a[i]&&prime(x))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
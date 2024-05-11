/*
* author: saifabrar
* created: 2024-05-11 23:08:11
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
    ll l,r; cin>>l>>r;
    cout<<"YES"<<endl;
    for(ll i=l;i<=r;i+=2){
        cout<<i<<" "<<i+1<<endl;
    }
    return 0;
}
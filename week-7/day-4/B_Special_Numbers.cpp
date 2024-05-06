/*
 * author: saifabrar
 * created: 2024-05-06 22:02:03
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>
const int MOD = 1e9+7;
void solve()
{
    ll n,k,p=1,ans = 0;
    cin>>n>>k;
    for(int i=0;i<=30;i++)
    {
        if(k&(1<<i))
            ans = (ans+p)%MOD;
        p=(p*n)%MOD;
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
/*
 * author: saifabrar
 * created: 2024-04-28 23:14:57
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n,k;cin>>n>>k;
    vector<int> a(k);
    for(int i=0;i<k;i++)
        cin>>a[i];
    sort(a.rbegin(),a.rend());
    ll ans=0,pos=0;
    for(int i=0;i<k;i++)
    {
        if(pos >= a[i])
            break;
        ans++;
        pos += n-a[i];
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
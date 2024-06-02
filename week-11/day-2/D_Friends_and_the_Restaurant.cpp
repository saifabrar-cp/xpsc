/*
 * author: saifabrar
 * created: 2024-06-02 22:55:31
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    ll n;cin>>n;
    vector<ll>a(n),b(n),d(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    for(int i=0;i<n;i++)d[i]=b[i]-a[i];
    sort(d.begin(), d.end());
    ll i=0,j=n-1,ans=0;
    while(i<j){
        if((d[i]+d[j])<0)i++;
        else ans++,i++,j--;
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
/*
 * author: saifabrar
 * created: 2024-04-28 23:22:52
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n,q;
    cin>>n>>q;
    vector<ll> a(n),pre(n+1);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        pre[i+1] = pre[i] + a[i];
    }
    for(int i=1;i<n;i++)
        a[i] = max(a[i],a[i-1]);

    for(int i=0;i<q;i++)
    {
        int k;cin>>k;
        cout<<pre[upper_bound(a.begin(),a.end(),k) - a.begin()]<<" \n"[i == q -1];
    }
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
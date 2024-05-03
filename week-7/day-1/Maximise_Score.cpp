/*
 * author: saifabrar
 * created: 2024-05-03 23:11:43
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int mn = INT_MAX;
    for(int i=1;i<n-1;i++)
        mn = min(mn, max(abs(a[i]-a[i-1]),abs(a[i]-a[i+1])));
    mn = min(mn,abs(a[1]-a[0]));
    mn = min(mn,abs(a[n-1]-a[n-2]));
    cout<<mn<<nl;
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
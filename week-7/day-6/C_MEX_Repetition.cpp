/*
 * author: saifabrar
 * created: 2024-05-08 11:32:03
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
    vector<int> a(n);
    ll b = 1LL * n * (n+1)/2;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b -= a[i];
    }
    a.push_back(b);
    k %= (n+1);
    rotate(a.begin(),a.end()-k,a.end());
    for(int i=0;i<n;i++)
        cout<<a[i]<<" \n"[i==n-1];
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
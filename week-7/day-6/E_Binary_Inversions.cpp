/*
 * author: saifabrar
 * created: 2024-05-08 11:55:53
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>
ll cnt(vector<int> a,int n)
{
    ll one = 0, count = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i] == 1) one++;
        else count += one;
    }
    return count;
}
void solve()
{
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    ll ans = cnt(a,n);
    int flag = -1;
    for(int i=0;i<n;i++)
    {
        if(a[i] == 0)
        {
            a[i] = 1;
            flag = i;
            break;
        }
    }
    if(cnt(a,n) > ans) ans = cnt(a,n);
    if(flag != -1)
        a[flag]= 0;
    for(int i = n-1;i>=0;i--)
    {
        if(a[i] == 1)
        {
            a[i] = 0;
            break;
        }
    }
    if(cnt(a,n) > ans) ans = cnt(a,n);
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
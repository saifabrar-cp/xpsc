/*
 * author: saifabrar
 * created: 2024-04-18 06:35:54
 * problem link: https://codeforces.com/problemset/problem/1763/A
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n;cin>>n;
    ll mn=-1,mx=0;
    while(n--)
    {
        ll x;cin>>x;
        mn &= x;
        mx |= x;
    }
    cout<< mx - mn<<nl;
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
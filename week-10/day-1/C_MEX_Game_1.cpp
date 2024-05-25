/*
 * author: saifabrar
 * created: 2024-05-25 19:30:02
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    ll n;
    cin >> n;
    vector<ll> fre(n + 1);
    ll in;
    for (int i = 0;i < n;i++) 
    {
        cin >> in;
        fre[in]++;
    }
 
    ll ans = 0;
    for (int i = 0;i <= n;i++) 
    {
        ans += (fre[i] == 1);
        if (ans == 2 || fre[i] == 0) 
        {
            cout << i << nl;
            return;
        }
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
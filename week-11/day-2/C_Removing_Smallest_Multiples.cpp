/*
 * author: saifabrar
 * created: 2024-06-02 22:57:13
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n;
    cin >> n;
    
    string t;
    cin >> t;
    
    ll ans = 0;
    
    vector<bool> vis(n);
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n && t[j - 1] == '0'; j += i) {
            if (!vis[j - 1]) {
                vis[j - 1] = true;
                ans += i;
            }
        }
    }
    
    cout << ans << nl;
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
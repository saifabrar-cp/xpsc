/*
 * author: saifabrar
 * created: 2024-05-17 22:52:42
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
    
    vector<int> last(1001);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        last[x] = i + 1;
    }
    
    int ans = -1;
    for (int i = 1; i <= 1000; i++) {
        for (int j = 1; j <= i; j++) {
            if (last[i] && last[j] && __gcd(i, j) == 1) {
                ans = max(ans, last[i] + last[j]);
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
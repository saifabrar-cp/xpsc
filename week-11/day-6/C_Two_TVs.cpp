/*
 * author: saifabrar
 * created: 2024-06-06 15:48:14
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
    map<int, int> d;
    for (int i = 1;i <= n;i++) {
        int l, r;
        cin >> l >> r;
        d[l]++;
        d[r + 1]--;
    }
 
    int sum = 0;
    bool ok = true;
    for (auto [idx, value] : d) {
        sum += value;
        if (sum > 2) {
            ok = false;
            break;
        }
    }
 
    cout << (ok ? "YES" : "NO") << nl;
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
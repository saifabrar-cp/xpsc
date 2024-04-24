/*
 * author: saifabrar
 * created: 2024-04-23 16:31:30
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    string s;
    cin >> s;
    s = s.substr(0, s.size() / 2);
    int k = unique(s.begin(), s.end()) - s.begin();
    cout << (k == 1 ? "NO" : "YES") << nl;
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
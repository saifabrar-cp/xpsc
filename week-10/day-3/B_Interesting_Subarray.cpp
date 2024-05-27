/*
 * author: saifabrar
 * created: 2024-05-27 20:13:35
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
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n - 1; ++i) {
        if (abs(a[i] - a[i + 1]) >= 2) {
            cout << "YES" << nl;
            cout << i + 1 << " " << i + 2 << nl;
            return;
        }
    }
    cout << "NO" << nl;
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
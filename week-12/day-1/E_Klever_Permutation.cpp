/*
 * author: saifabrar
 * created: 2024-06-08 21:57:50
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    int cur = 0;
    for (int x = 0; x < k; x++) {
        if (x % 2 == 0) {
            for (int i = x; i < n; i += k) {
                a[i] = ++cur;
            }
        } else {
            for (int i = (n - 1) - (n - 1 - x) % k; i >= 0; i -= k) {
                a[i] = ++cur;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << a[i] << " \n"[i == n - 1];
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
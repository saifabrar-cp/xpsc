/*
 * author: saifabrar
 * created: 2024-04-03 16:55:27
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int ans = a[n - 1] - a[0];

        for (int i = 1; i < n; i++)
            ans = max(ans, a[i] - a[0]);

        for (int i = 0; i < n - 1; i++)
            ans = max(ans, a[n - 1] - a[i]);

        for (int i = 0; i < n - 1; i++)
            ans = max(ans, a[i] - a[i + 1]);

        cout << ans << nl;
    }
    return 0;
}
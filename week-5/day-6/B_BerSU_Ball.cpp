/*
 * author: saifabrar
 * created: 2024-04-24 11:43:45
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

    int n;
    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int m;
    cin >> m;
    vector<int> g(m);
    for (int i = 0; i < m; i++)
        cin >> g[i];

    sort(b.begin(), b.end());
    sort(g.begin(), g.end());

    int i = 0, j = 0, ans = 0;
    while (i < n && j < m)
    {
        if (abs(b[i] - g[j]) <= 1)
            ans++, i++, j++;
        else if (b[i] > g[j])
            j++;
        else if (g[j] > b[i])
            i++;
    }
    cout << ans << nl;
    return 0;
}
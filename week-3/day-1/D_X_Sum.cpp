/*
 * author: saifabrar
 * created: 2024-03-29 16:02:50
 * problem link: https://codeforces.com/problemset/problem/1676/D
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
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cin >> a[i][j];
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int s = 0, ci = i, cj = j;
                while (ci >= 0 && ci < n && cj >= 0 && cj < m)
                {
                    s += a[ci][cj];
                    ci--, cj--;
                }
                ci = i, cj = j;
                while (ci >= 0 && ci < n && cj >= 0 && cj < m)
                {
                    s += a[ci][cj];
                    ci++, cj--;
                }
                ci = i, cj = j;
                while (ci >= 0 && ci < n && cj >= 0 && cj < m)
                {
                    s += a[ci][cj];
                    ci--, cj++;
                }
                ci = i, cj = j;
                while (ci >= 0 && ci < n && cj >= 0 && cj < m)
                {
                    s += a[ci][cj];
                    ci++, cj++;
                }
                s -= (3 * a[i][j]);
                sum = max(sum, s);
            }
        }
        cout << sum << nl;
    }
    return 0;
}
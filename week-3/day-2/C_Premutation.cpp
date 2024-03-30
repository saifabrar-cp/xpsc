/*
 * author: saifabrar
 * created: 2024-03-30 23:04:26
 * problem link: https://codeforces.com/problemset/problem/1790/C
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
        int a[n][n - 1];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
                cin >> a[i][j];
        }

        int fre[n + 1] = {0};
        for (int i = 0; i < n; i++)
            fre[a[i][0]]++;
        int x, y;
        for (int i = 0; i < n; i++)
        {
            if (fre[a[i][0]] == n - 1)
                x = a[i][0];
            if (fre[a[i][0]] == 1)
                y = a[i][0];
        }
        cout << x << " ";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (a[i][0] != x)
                    cout << a[i][j] << " ";
            }
        }
        cout << nl;
    }
    return 0;
}
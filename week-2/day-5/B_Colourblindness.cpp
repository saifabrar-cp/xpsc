/*
 * author: saifabrar
 * created: 2024-03-26 15:51:32
 * problem link: https://codeforces.com/problemset/problem/1722/B
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
        string a, b;
        cin >> a >> b;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'R' && b[i] != 'R')
                cnt++;
            else if (a[i] != 'R' && b[i] == 'R')
                cnt++;
            if (cnt > 0)
                break;
        }
        cnt > 0 ? cout << "NO" : cout << "YES";
        cout << nl;
    }
    return 0;
}
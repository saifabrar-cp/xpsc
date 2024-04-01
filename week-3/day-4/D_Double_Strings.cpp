/*
 * author: saifabrar
 * created: 2024-04-01 01:24:32
 * problem link: https://codeforces.com/problemset/problem/1703/D
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
        vector<string> a(n);
        map<string, int> fre;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            fre[a[i]]++;
        }

        string ans(n, '0');

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < a[i].size(); j++)
            {
                string x = a[i].substr(0, j);
                string y = a[i].substr(j);
                if (fre.count(x) && fre.count(y))
                {
                    ans[i] = '1';
                    break;
                }
            }
        }

        cout << ans << nl;
    }
    return 0;
}
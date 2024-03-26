/*
 * author: saifabrar
 * created: 2024-03-26 16:09:05
 * problem link: https://codeforces.com/problemset/problem/1374/C
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
        string s;
        cin >> s;
        int cnt = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
                cnt++;
            else
            {
                cnt--;
                if (cnt < 0)
                {
                    ans++;
                    cnt = 0;
                }
            }
        }
        cout << ans << nl;
    }
    return 0;
}
/*
 * author: saifabrar
 * created: 2024-04-16 19:47:38
 * problem link: https://codeforces.com/problemset/problem/1867/B
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
        int gp = 0, bp = 0, l = 0, r = n - 1;
        while (l < r)
        {
            if (s[l] == s[r])
                gp++;
            else
                bp++;
            l++, r--;
        }
        string ans(n + 1, '0');

        for (int i = bp; i < n + 1; i++)
        {
            int diff = i - bp;
            if (diff % 2)
            {
                if (n % 2)
                {
                    diff--;
                    if (gp >= diff / 2)
                        ans[i] = '1';
                }
            }
            else
            {
                if (gp >= diff / 2)
                    ans[i] = '1';
            }
        }
        cout << ans << nl;
    }
    return 0;
}
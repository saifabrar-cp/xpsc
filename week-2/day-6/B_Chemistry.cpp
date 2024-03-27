/*
 * author: saifabrar
 * created: 2024-03-27 15:14:53
 * problem link: https://codeforces.com/problemset/problem/1883/B
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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<int, int> mp;
        for (char c : s)
            mp[c]++;
        int cnt = 0;
        for (auto it : mp)
        {
            if (it.second % 2 == 1)
                cnt++;
        }
        cnt -= k;
        cnt > 1 ? cout << "NO" : cout << "YES";
        cout << nl;
    }
    return 0;
}
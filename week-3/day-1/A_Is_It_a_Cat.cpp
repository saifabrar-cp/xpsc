/*
 * author: saifabrar
 * created: 2024-03-29 15:13:01
 * problem link: https://codeforces.com/problemset/problem/1800/A
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
        for (auto &c : s)
            c = tolower(c);
        s.erase(unique(s.begin(), s.end()), s.end());
        s == "meow" ? cout << "YES" : cout << "NO";
        cout << nl;
    }
    return 0;
}
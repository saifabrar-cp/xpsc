/*
 * author: saifabrar
 * created: 2024-04-04 05:29:23
 * problem link: https://codeforces.com/problemset/problem/1714/B
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
        set<int> s;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s.find(a[i]) != s.end())
                break;
            s.insert(a[i]);
        }
        cout << n - s.size() << nl;
    }
    return 0;
}
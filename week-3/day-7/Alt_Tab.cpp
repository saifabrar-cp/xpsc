/*
 * author: saifabrar
 * created: 2024-04-04 05:55:29
 * problem link: https://www.codechef.com/problems/ALTTAB
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
    vector<string> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    set<string> s;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s.find(a[i]) != s.end())
            continue;
        s.insert(a[i]);
        int sz = a[i].size();
        cout << a[i][sz - 2] << a[i][sz - 1];
    }

    return 0;
}
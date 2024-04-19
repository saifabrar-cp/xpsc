/*
 * author: saifabrar
 * created: 2024-04-19 07:48:36
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<char, int>

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<pii> v;
    char a, b;
    bool ok = false;
    if (s[0] > s[n - 1])
    {
        a = s[n - 1], b = s[0];
        ok = true;
    }
    else
        a = s[0], b = s[n - 1];
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= a && s[i] <= b)
            v.push_back({s[i], i + 1});
    }

    sort(v.begin(), v.end());
    if (ok)
        reverse(v.begin(), v.end());
    ll sum = 0;
    for (int i = 1; i < v.size(); i++)
        sum += abs((v[i].first - 'a') - (v[i - 1].first - 'a'));
    cout << sum << " " << v.size() << nl;
    cout << 1 << " ";
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].second != 1 && v[i].second != n)
            cout << v[i].second << " ";
    }
    cout << n << nl;
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
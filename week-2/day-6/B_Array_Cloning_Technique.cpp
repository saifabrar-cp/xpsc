/*
 * author: saifabrar
 * created: 2024-03-27 11:36:41
 * problem link: https://codeforces.com/problemset/problem/1665/B
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
        vector<ll> a(n);
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        ll mx = 0, ans = 0;
        for (auto it : mp)
            mx = max(mx, it.second);
        while (mx < n)
        {
            ll rem = n - mx;
            ll add = mx;
            ans++;
            ans += min(add, rem);
            mx += min(add, rem);
        }
        cout << ans << nl;
    }
    return 0;
}
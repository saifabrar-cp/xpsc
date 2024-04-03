/*
 * author: saifabrar
 * created: 2024-04-03 15:50:38
 * problem link: https://codeforces.com/problemset/problem/1843/B
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
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += abs(a[i]);
        }
        int l = 0, cnt = 0;
        while (a[l] >= 0 && l < n)
            l++;
        while (l < n)
        {
            while (a[l] <= 0 && l < n)
                l++;
            while (a[l] >= 0 && l < n)
                l++;
            cnt++;
        }
        cout << sum << " " << cnt << nl;
    }
    return 0;
}
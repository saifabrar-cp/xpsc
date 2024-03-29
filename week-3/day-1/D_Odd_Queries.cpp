/*
 * author: saifabrar
 * created: 2024-03-29 15:32:13
 * problem link: https://codeforces.com/contest/1807/problem/D
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
        ll n, q;
        cin >> n >> q;
        vector<ll> a(n), pre(n + 1);
        ll sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        pre[0] = 0;
        pre[1] = a[0];
        for (int i = 1; i < n; i++)
            pre[i + 1] = pre[i] + a[i];

        while (q--)
        {
            ll s = sum;
            ll l, r, k;
            cin >> l >> r >> k;

            s = s - (pre[r] - pre[l - 1]) + ((r - l + 1) * k);
            s % 2 == 1 ? cout << "YES" : cout << "NO";
            cout << nl;
        }
    }
    return 0;
}
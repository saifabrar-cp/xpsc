/*
 * author: saifabrar
 * created: 2024-04-26 15:33:34
 * problem link: https://codeforces.com/contest/474/problem/B
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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> pre(n);
    pre[0] = a[0];
    for (int i = 1; i < n; i++)
        pre[i] = pre[i - 1] + a[i];
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        int ans = lower_bound(pre.begin(), pre.end(), x) - pre.begin();
        cout << ans + 1 << nl;
    }
    return 0;
}
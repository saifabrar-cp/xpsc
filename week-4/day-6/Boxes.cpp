/*
 * author: saifabrar
 * created: 2024-04-17 07:15:16
 * problem link: https://www.codechef.com/problems/BOX95
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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.rbegin(), a.rend());
        ll cur = a[0], i = 0, j = n - 1, ans = 1;
        while (i < j)
        {
            if (cur >= a[j])
            {
                cur ^= a[j];
                j--;
            }
            else
            {
                ans++;
                cur = a[i];
                i++;
            }
        }
        cout << ans << nl;
    }
    return 0;
}
/*
 * author: saifabrar
 * created: 2024-03-24 23:46:55
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

    ll n, s;
    cin >> n >> s;

    vector<ll> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll l = 0, r = 0, ans = LONG_LONG_MAX, sum = 0;

    while (r < n)
    {
        sum += a[r];
        while (sum >= s)
        {
            ans = min(ans, r - l + 1);
            sum -= a[l];
            l++;
        }
        r++;
    }
    ans == LONG_LONG_MAX ? cout << -1 : cout << ans;
    return 0;
}
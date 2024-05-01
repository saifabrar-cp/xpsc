/*
 * author: saifabrar
 * created: 2024-05-01 22:48:14
 * problem link:
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
    ll n, a, b, ans, i;
    cin >> n >> a >> b;
    ans = 1;
    for (i = 1; i <= a; i++)
    {
        if (i == n)
            continue;
        ans = max(ans, min(a / i, b / (n - i)));
    }
    cout << ans;
    return 0;
}
/*
 * author: saifabrar
 * created: 2024-04-16 22:08:07
 * problem link: https://www.codechef.com/problems/XORRY1?tab=statement
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
        ll n;
        cin >> n;
        ll a = n, cnt = 0;
        while (a > 1)
        {
            a /= 2;
            cnt++;
        }
        cout << n - (1 << cnt) << " " << (1 << cnt) << nl;
    }
    return 0;
}
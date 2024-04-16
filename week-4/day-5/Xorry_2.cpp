/*
 * author: saifabrar
 * created: 2024-04-16 22:41:25
 * problem link: https://www.codechef.com/problems/XORRY2
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
        ll b = 0, ans = 1;
        bool flag = false;
        for (int i = cnt - 1; i >= 0; i--)
        {
            if (n & 1 << i)
            {
                b |= (1 << i);
                flag = true;
            }
            else
            {
                if (flag)
                    ans *= 2;
            }
        }
        cout << ans << nl;
    }
    return 0;
}
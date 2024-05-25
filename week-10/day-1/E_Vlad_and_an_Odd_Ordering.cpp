/*
 * author: saifabrar
 * created: 2024-05-25 19:34:05
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n, k; 
    cin >> n >> k;
    for(int i = 1; i <= (log2(n) + 1); i++)
    {
        ll x = pow(2 , i);
        ll y = (n + (x / 2)) / x;
        if(k <= y)
        {
            if(k == 1)
            {
                cout << x / 2 << nl;
                return;
            }
            else
            {
                ll ans = (x / 2) + (k - 1) * x;
                cout << ans << nl;
                return;
            }
        }
        else
            k -= y;
    }
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
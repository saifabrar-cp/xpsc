/*
 * author: saifabrar
 * created: 2024-05-16 22:33:30
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int l, r;
    cin >> l >> r;

    for(int i = max(4, l); i <= r; i++)
    {
        for(int j = 2; j * j <= i; j++)
        {
            if(i % j ==0)
            {
                cout << j << ' ' << i - j << nl;
                return;
            }
        }
    }
    cout << -1 << nl;
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
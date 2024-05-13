/*
 * author: saifabrar
 * created: 2024-05-13 20:59:47
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n + 1);
    for(ll i =1; i <= n; i++)
        cin >> v[i];
    ll cnt = 0;
    for(ll i =1; i <= n; i++)
    {
        if(v[i] % (i + 1))
            cnt++;
        else 
        {
            bool flag = false;
            for(ll j = 1; j <= cnt; j++)
            {
                if(v[i] % ((i + 1) - j))
                {
                    cnt++;
                    flag = true;
                    break;
                }
            }
            if(!flag)
            {
                cout << "NO" << nl;
                return;
            }
        }
    }
    cout << "YES" << nl;
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
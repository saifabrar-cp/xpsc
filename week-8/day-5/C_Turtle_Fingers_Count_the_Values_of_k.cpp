/*
 * author: saifabrar
 * created: 2024-05-15 15:12:08
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
   ll a, b, l;
   cin >> a >> b >> l;
   set<ll> s;
   ll p = 1;
   while(l % p == 0) 
   {
        ll q = 1;
        while((l / p) % q == 0)
        {
            s.insert((l / p) / q);
            q *= b;
        }
        p *= a;
   }
   cout << s.size() << nl;
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
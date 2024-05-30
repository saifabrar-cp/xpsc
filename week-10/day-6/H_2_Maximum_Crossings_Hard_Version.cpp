/*
 * author: saifabrar
 * created: 2024-05-30 14:59:40
 * problem link: 
 */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n + 1);
    for(ll i = 1; i <= n; i++)
        cin >> v[i];
    ordered_set os;
    ll ans = 0;
    for(ll i = 1; i <= n; i++)
    {
        if(i == 1)
            os.insert(v[i]);
        else
        {
            os.insert(v[i]);
            ll tot = (ll)os.size(), big, small;
            small = os.order_of_key(v[i]);
            small++;
            big = (tot - small);
            ans += big;
        }
    }
    cout << ans << nl;
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
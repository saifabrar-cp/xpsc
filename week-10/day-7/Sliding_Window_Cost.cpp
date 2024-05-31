/*
* author: saifabrar
* created: 2024-05-31 16:45:49
* problem link: 
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl  '\n'
#define pii pair<ll,ll>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie(0);
    cout.tie(0);
    
    int n, m; 
    cin >> n >> m;
    vector<int> a(n);
    for (int &x : a) 
        cin >> x;
    ordered_set<array<int,2>> os;
    for (int i = 0; i < m; i++) 
        os.insert({a[i], i});
    int med = (*os.find_by_order((m - 1) / 2))[0];    
    ll ans = 0;
    for (int i = 0; i < m; i++) 
        ans += abs(a[i] - med);
    cout << ans << " ";
    for (int l = 0, r = m; r < n; l++, r++) 
    {
        os.insert({a[r], r});
        os.erase({a[l], l});
        int nmed = (*os.find_by_order((m - 1) / 2))[0];
        ans += abs(a[r] - nmed) - abs(a[l] - med);
        if (m % 2 == 0) ans += (med - nmed);
        med = nmed;
        cout << ans << " ";
    }
    cout << nl;
    return 0;
}
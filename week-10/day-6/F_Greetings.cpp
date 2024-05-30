/*
 * author: saifabrar
 * created: 2024-05-30 15:03:53
 * problem link: 
 */
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>
template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;
    sort(a.begin(), a.end());
    ordered_set<int> pbds;
    for (auto [x, y] : a)
        pbds.insert(y);
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        pbds.erase(a[i].second);
        ans += pbds.order_of_key(a[i].second);
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
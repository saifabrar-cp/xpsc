/*
* author: saifabrar
* created: 2024-05-31 16:13:31
* problem link: 
*/
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define nl  '\n'
#define pii pair<ll,ll>
 
template <typename T> using ordered_set1 = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T> using ordered_set2 = tree<T, null_type, greater<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie(0);
    cout.tie(0);
    
    ll n;
    cin >> n;
    ll a[n];

    for(int i = 0; i < n; i++) 
        cin >> a[i];

    ordered_set1<ll> st1;
    ordered_set2<ll> st2;

    for(int i = 0; i < n; i++) st1.insert(a[i]);
    
    ll ans = 0;
    for(int i = 0; i < n; i++){
        st1.erase(a[i]);
        ans += (1LL * st1.order_of_key(a[i]) * st2.order_of_key(a[i]));
        st2.insert(a[i]);
    }
    cout << ans;
    return 0;
}
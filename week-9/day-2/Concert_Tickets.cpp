/*
* author: saifabrar
* created: 2024-05-19 22:57:51
* problem link: 
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl  '\n'
#define pii pair<ll,ll>
int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie(0);
    cout.tie(0);
    
    ll n,m;
    cin >> n >> m;
    multiset<ll> st;
    for(ll i = 0; i < n; i++){
        ll x;
        cin >> x;
        st.insert(x);
    }
    for(ll i = 0; i < m; i++){
        ll x;
        cin >> x;
        auto it = st.lower_bound(x);
        if(*it==x)
        {
            cout << *it << nl;
            st.erase(it);
        }
        else
        {
            if(it == st.begin())
                cout << -1 << nl;
            else
            {
                it--;
                cout << *it << nl;
                st.erase(it);
            }
        }
    }
    return 0;
}
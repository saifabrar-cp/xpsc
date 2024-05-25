/*
* author: saifabrar
* created: 2024-05-25 19:43:27
* problem link: 
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl  '\n'
#define pii pair<ll,ll>
const ll N = 1e9;

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie(0);
    cout.tie(0);
    
    ll cnt = 0;
    map <ll,ll> c;
    set <ll> st;
    set <pii> sp;
    ll q;
    cin >> q;
    while(q--)
    {
        ll t;
        cin >> t;
        if(t == 1)
        {
            ll m;
            cin >> m;
            cnt++;
            st.insert(cnt);
            sp.insert({m, N - cnt});
            c[cnt] = m;
        }
        if(t == 2)
        {
            ll val=*st.begin();
            cout << val << " ";
            st.erase(val);
            sp.erase({c[val], N - val});
            c.erase(val);
        }
        if(t==3)
        {
            pii val = *sp.rbegin();
            cout << N - val.second << " ";
            st.erase(N - val.second);
            sp.erase(val);
            c.erase(N - val.second);
        }
    }
    cout << nl;
    return 0;
}
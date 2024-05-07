/*
 * author: saifabrar
 * created: 2024-05-07 23:09:08
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n), x(q);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < q; i++)
        cin >> x[i];
    set<ll> st;
    for (int i = 0; i < q; i++)
    {
        if (st.count(x[i]))
            continue;
        st.insert(x[i]);
        for (int j = 0; j < n; j++)
        {
            if (a[j] % (1 << x[i]) == 0)
                a[j] += (1 << (x[i] - 1));
        }
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " \n"[i == n - 1];
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
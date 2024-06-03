/*
 * author: saifabrar
 * created: 2024-06-03 20:00:36
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n, k;
    cin >> n >> k;
    
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    
    sort(a.begin(), a.end());
    ll ans = a[0];
    for (int i = 1; i < n; i++)
        ans = min(ans, a[i] - a[i - 1]);

    
    if (k == 2) 
    {
        for (int i = 0; i < n; i++) 
        {
            for (int j = i + 1; j < n; j++) 
            {
                ll v = a[j] - a[i];
                int k = lower_bound(a.begin(), a.end(), v) - a.begin();
                if (k > 0)
                    ans = min(ans, v - a[k - 1]);
                if (k < n)
                    ans = min(ans, a[k] - v);
            }
        }
    } 
    else if (k > 2)
        ans = 0;
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
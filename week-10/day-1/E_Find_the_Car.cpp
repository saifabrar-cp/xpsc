/*
 * author: saifabrar
 * created: 2024-05-25 19:24:33
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n, k, q;
    cin >> n >> k >> q;
    
    vector<int> a(k + 1);
    for (int i = 1; i <= k; i++) 
        cin >> a[i];
    
    vector<int> b(k + 1);
    for (int i = 1; i <= k; i++)
        cin >> b[i];
    
    while (q--) 
    {
        int d;
        cin >> d;
        
        int j = lower_bound(a.begin(), a.end(), d) - a.begin();
        int ans;
        if (j == 0) 
            ans = 0;
        else 
            ans = b[j - 1] + 1LL * (b[j] - b[j - 1]) * (d - a[j - 1]) / (a[j] - a[j - 1]);
            
        cout << ans << " \n"[q == 0];
    }
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
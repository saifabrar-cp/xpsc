/*
 * author: saifabrar
 * created: 2024-06-08 12:38:13
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    string s;
    cin >> s;
    
    const int n = s.size();
    
    vector<int> pre(n + 1);
    for (int i = 0; i < n; i++)
        pre[i + 1] = pre[i] + (s[i] == '(' ? 1 : -1);
    
    
    set<int> high;
    vector<vector<int>> vec(n + 1);
    for (int i = 0; i <= n; i++)
        vec[pre[i]].push_back(i);

    ll ans = 0;
    for (int i = n, j = n; i >= 0; i--)
    {
        while (j > 2 * i) 
        {
            for (auto x : vec[j])
                high.insert(x);
            j--;
        }
        int cnt = 1;
        for (int k = 1; k < vec[i].size(); k++) 
        {
            auto it = high.lower_bound(vec[i][k - 1]);
            if (it != high.end() && *it < vec[i][k])
                cnt = 0;
            ans += cnt;
            cnt++;
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
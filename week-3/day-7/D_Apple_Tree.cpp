/*
 * author: saifabrar
 * created: 2024-04-04 05:11:58
 * problem link: https://codeforces.com/problemset/problem/1843/D
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>
const int N = 1e6 + 5;
vector<int> adj[N];
vector<ll> leafs;
void dfs(int cur, int par)
{
    bool hasChild = false;
    for (auto c : adj[cur])
    {
        if (c == par)
            continue;
        hasChild = true;
        dfs(c, cur);
        leafs[cur] += leafs[c];
    }
    if (!hasChild)
        leafs[cur] = 1;
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i <= n; i++)
            adj[i].clear();
        leafs.assign(n + 2, 0);

        int e = n - 1;
        while (e--)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs(1, -1);
        int q;
        cin >> q;
        while (q--)
        {
            int x, y;
            cin >> x >> y;
            ll ans = leafs[x] * leafs[y];
            cout << ans << nl;
        }
    }
    return 0;
}
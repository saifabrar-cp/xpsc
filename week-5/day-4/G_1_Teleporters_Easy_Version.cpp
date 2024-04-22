/*
 * author: saifabrar
 * created: 2024-04-22 15:31:38
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n, c;
    cin >> n >> c;
    priority_queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        q.push(-x - i);
    }
    int ans = 0;
    while (!q.empty())
    {
        int x = -q.top();
        q.pop();
        if (x > c)
            break;
        ans++;
        c -= x;
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
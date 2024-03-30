/*
 * author: saifabrar
 * created: 2024-03-30 23:18:44
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>
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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        priority_queue<int> pq;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            pq.push(a[i]);
            if (a[i] == 0 && !pq.empty())
            {
                ans += pq.top();
                pq.pop();
            }
        }
        cout << ans << nl;
    }
    return 0;
}
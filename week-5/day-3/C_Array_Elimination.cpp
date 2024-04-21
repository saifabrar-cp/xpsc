/*
 * author: saifabrar
 * created: 2024-04-21 15:42:22
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n;
    cin >> n;
    vector<int> a(31);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        for (int j = 0; j <= 30; j++)
        {
            if ((x >> j) & 1)
                a[j]++;
        }
    }
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        bool ok = true;
        for (int j = 0; j <= 30; j++)
        {
            if (a[j] % i != 0)
            {
                ok = false;
                break;
            }
        }
        if (ok)
            ans.push_back(i);
    }
    for (int i : ans)
        cout << i << " ";
    cout << nl;
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
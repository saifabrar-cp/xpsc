/*
 * author: saifabrar
 * created: 2024-04-02 16:15:10
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
        vector<pii> a, b, c;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            a.push_back({x, i});
        }
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            b.push_back({x, i});
        }
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            c.push_back({x, i});
        }

        sort(a.begin(), a.end(), greater<pii>());
        sort(b.begin(), b.end(), greater<pii>());
        sort(c.begin(), c.end(), greater<pii>());

        ll ans = 0;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    if ((a[i].second != b[j].second) && (a[i].second != c[k].second) && (b[j].second != c[k].second))
                    {
                        ll sum = a[i].first + b[j].first + c[k].first;
                        ans = max(sum, ans);
                    }
                }
            }
        }
        cout << ans << nl;
    }
    return 0;
}
/*
 * author: saifabrar
 * created: 2024-04-01 17:32:56
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
        multiset<ll> ml;
        for (int i = 1; i <= n; i++)
        {
            ll x;
            cin >> x;
            ml.insert(x);
        }
        ll ans = 0;
        while (!ml.empty())
        {
            ll cur = *ml.begin();
            while (1)
            {
                auto val = ml.find(cur + 1);
                if (val == ml.end())
                {
                    ml.erase(ml.begin());
                    ans++;
                    break;
                }
                ml.erase(val);
                cur++;
            }
        }
        cout << ans << nl;
    }
    return 0;
}
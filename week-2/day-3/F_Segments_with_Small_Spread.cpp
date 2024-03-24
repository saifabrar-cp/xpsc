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

    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll l = 0, r = 0, ans = 0;
    multiset<ll> ml;

    while (r < n)
    {
        ml.insert(a[r]);
        ll mn = *ml.begin();
        ll mx = *ml.rbegin();
        if (mx - mn <= k)
            ans += (r - l + 1);
        else
        {
            while (mx - mn > k)
            {
                auto it = ml.find(a[l]);
                ml.erase(it);
                l++;
                mn = *ml.begin(), mx = *ml.rbegin();
            }
            if (mx - mn <= k)
                ans += (r - l + 1);
        }
        r++;
    }
    cout << ans;
    return 0;
}
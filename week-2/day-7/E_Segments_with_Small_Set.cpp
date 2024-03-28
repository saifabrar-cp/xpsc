/*
 * author: saifabrar
 * created: 2024-03-28 16:10:37
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

    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (k == 0)
    {
        cout << 0;
        return 0;
    }

    ll l = 0, r = 0, cnt = 0, ans = 0;
    map<ll, ll> mp;
    while (r < n)
    {
        while (r < n && cnt <= k)
        {
            mp[a[r]]++;
            if (mp[a[r]] == 1)
                cnt++;
            if (cnt <= k)
            {
                ans += (r - l + 1);
                r++;
            }
            else
                break;
        }
        if (r < n)
        {
            mp[a[r]]--;
            if (mp[a[r]] == 0)
                cnt--;
        }
        mp[a[l]]--;
        if (mp[a[l]] == 0)
            cnt--;
        l++;
    }
    cout << ans;
    return 0;
}
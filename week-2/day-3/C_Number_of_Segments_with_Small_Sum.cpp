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

    ll n, s;
    cin >> n >> s;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll l = 0, r = 0, ans = 0, sum = 0;

    while (r < n)
    {
        sum += a[r];
        if (sum <= s)
            ans += (r - l + 1);
        else
        {
            while (l < r && sum > s)
            {
                sum -= a[l];
                l++;
            }
            if (sum <= s)
                ans += (r - l + 1);
        }
        r++;
    }
    cout << ans;
    return 0;
}
/*
 * author: saifabrar
 * created: 2024-04-24 16:02:06
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

    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    while (q--)
    {
        int k;
        cin >> k;
        int l = 0, r = n - 1, mid;
        int ans = -1;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (k >= a[mid])
            {
                ans = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        ans != -1 ? cout << ans + 1 : cout << 0;
        cout << nl;
    }
    return 0;
}
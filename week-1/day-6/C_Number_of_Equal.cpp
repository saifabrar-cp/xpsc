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

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    ll i, j, ans;
    i = j = ans = 0;
    while (i < n && j < m)
    {
        ll cnt1, cnt2, cur = a[i];
        cnt1 = cnt2 = 0;
        while (i < n && cur == a[i])
        {
            cnt1++;
            i++;
        }
        while (j < m && cur > b[j])
            j++;
        while (j < m && cur == b[j])
        {
            cnt2++;
            j++;
        }
        ans += (cnt1 * cnt2);
    }
    cout << ans;

    return 0;
}
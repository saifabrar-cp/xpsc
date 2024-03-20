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
    int l, r, ans;
    l = r = ans = 0;
    while (r < m)
    {
        while (l < n && a[l] < b[r])
        {
            ans++;
            l++;
        }
        r++;
        cout << ans << ' ';
    }
    return 0;
}
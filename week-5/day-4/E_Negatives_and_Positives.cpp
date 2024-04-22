/*
 * author: saifabrar
 * created: 2024-04-22 15:37:40
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll negs = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < 0)
        {
            negs++;
            a[i] *= -1;
        }
        sum += a[i];
    }
    sort(a.begin(), a.end());
    if (negs & 1)
        sum -= 2 * a[0];
    cout << sum << nl;
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
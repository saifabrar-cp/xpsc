/*
 * author: saifabrar
 * created: 2024-04-25 21:48:43
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

    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int k;
    cin >> k;
    while (k--)
    {
        ll l, r;
        cin >> l >> r;
        cout << upper_bound(a.begin(), a.end(), r) - lower_bound(a.begin(), a.end(), l) << ' ';
    }
    return 0;
}
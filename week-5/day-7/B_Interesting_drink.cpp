/*
 * author: saifabrar
 * created: 2024-04-25 23:12:23
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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        cout << upper_bound(a.begin(), a.end(), x) - a.begin() << nl;
    }
    return 0;
}
/*
 * author: saifabrar
 * created: 2024-04-22 20:33:53
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n;
    cin >> n;
    int b = (n * (n - 1)) / 2;
    vector<int> a(b);
    for (int i = 0; i < b; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int j = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        j += i;
        cout << a[j] << ' ';
    }
    cout << nl;
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
/*
 * author: saifabrar
 * created: 2024-05-05 23:11:56
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
    ll n;
    cin >> n;
    ll m = n / 4;
    for (int i = 0; i < m; i++)
        cout << "aabb";
    if (n % 4 == 3)
        cout << "aab";
    else if (n % 4 == 2)
        cout << "aa";
    else if (n % 4 == 1)
        cout << "a";
    return 0;
}
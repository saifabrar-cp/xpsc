/*
 * author: saifabrar
 * created: 2024-04-03 16:09:09
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

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll sum = 0;
        while (n)
        {
            sum += n;
            n /= 2;
        }
        cout << sum << nl;
    }
    return 0;
}
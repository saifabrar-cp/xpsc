/*
 * author: saifabrar
 * created: 2024-04-17 06:51:25
 * problem link: https://www.codechef.com/problems/CS2023_PON
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
        int n, b;
        cin >> n >> b;
        int cur = -1;
        while (n--)
        {
            int x;
            cin >> x;
            if ((x & b) == b)
                cur &= x;
        }
        (cur == b) ? cout << "YES" : cout << "NO";
        cout << nl;
    }
    return 0;
}
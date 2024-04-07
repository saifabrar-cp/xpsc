/*
 * author: saifabrar
 * created: 2024-04-07 22:33:50
 * problem link: https://codeforces.com/problemset/problem/1805/A
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
        int n;
        cin >> n;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum ^= x;
        }
        if (n % 2 == 0)
        {
            if (sum == 0)
                cout << 0;
            else
                cout << -1;
        }
        else
            cout << sum;
        cout << nl;
    }
    return 0;
}
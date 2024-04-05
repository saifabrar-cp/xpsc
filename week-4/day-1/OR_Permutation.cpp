/*
 * author: saifabrar
 * created: 2024-04-05 15:49:19
 * problem link: https://www.codechef.com/problems/PERMOR?tab=statement
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
        for (int i = n; i >= 1; i--)
            cout << i << " ";
        cout << nl;
    }
    return 0;
}
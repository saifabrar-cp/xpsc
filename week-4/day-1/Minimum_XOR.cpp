/*
 * author: saifabrar
 * created: 2024-04-05 15:35:31
 * problem link: https://www.codechef.com/problems/MINMXOR?tab=statement
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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        int sum = 0;
        for (int i = 0; i < n; i++)
            sum ^= a[i];
        int mn = sum;
        for (int i = 0; i < n; i++)
        {
            int rmv = sum ^ a[i];
            mn = min(mn, rmv);
        }
        cout << mn << nl;
    }
    return 0;
}
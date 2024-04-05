/*
 * author: saifabrar
 * created: 2024-04-05 15:56:14
 * problem link: https://www.codechef.com/problems/FIZZBUZZ2304?tab=statement
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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int l = 0, r = k, cnt = 0;
        while (r <= n)
        {
            int c = 0;
            for (int i = l; i < r; i++)
            {
                if (a[i] % 2 == 1)
                {
                    c = 1;
                    break;
                }
            }
            l++;
            r++;
            if (c == 1)
                cnt++;
        }
        cout << cnt << nl;
    }
    return 0;
}
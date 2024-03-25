/*
 * author: saifabrar
 * created: 2024-03-24 23:55:45
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

    int k, s;
    cin >> k >> s;
    int ans = 0;

    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            int z = s - i - j;
            if (z < 0 || z > k)
                continue;
            ans++;
        }
    }
    cout << ans;
    return 0;
}
/*
 * author: saifabrar
 * created: 2024-05-15 15:57:37
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
    map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        int tmp = sqrt(x);
        for(int j = 2; j <= tmp && x > 1; j++)
        {
            while(x % j == 0)
            {
                mp[j]++;
                x /= j;
            }
        }
        if(x > 1)
            mp[x]++;
    }

    for(auto it : mp)
    {
        if(it.second % n)
        {
            cout << "NO" << nl;
            return;
        }
    }
    cout << "YES" << nl;
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
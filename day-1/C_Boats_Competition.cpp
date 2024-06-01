/*
 * author: saifabrar
 * created: 2024-06-01 12:07:04
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
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(),v.end());
    int ans = -1;
    for(int sum = 1; sum <= 100; sum++)
    {
        int l = 0, r = n - 1, cnt = 0;
        while(l < r)
        {
            if((v[l] + v[r]) > sum)
                r--;
            else if((v[l] + v[r]) < sum)
                l++;
            else
            {
                l++;
                r--;
                cnt++;
            }
        }
        ans = max(ans, cnt);
    }
    cout << ans << nl;
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
/*
 * author: saifabrar
 * created: 2024-05-04 12:33:52
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    int ans = INT_MAX;
    for(int i = 'a';i<='z';i++)
    {
        int cnt = 0;
        int l = 0, r = n - 1;
        while(l<=r)
        {
            if(s[l] != s[r])
            {
                if(s[l] == i)
                    cnt++,l++;
                else if(s[r] == i)
                    cnt++,r--;
                else
                {
                    cnt = INT_MAX;
                    break;
                }
            }
            else
                l++,r--;
        }
        ans = min(ans,cnt);
    }
    cout<<(ans == INT_MAX ? -1 : ans)<<nl;
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
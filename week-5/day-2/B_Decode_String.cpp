/*
 * author: saifabrar
 * created: 2024-04-20 19:20:27
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
    string s;
    cin>>n>>s;
    int i=n-1;
    string ans = "";
    while(i>=0)
    {
        if(s[i] == '0')
        {
            ans += ('a' + ((s[i-2]-'0') * 10 + s[i-1]-'0'-1));
            i-=3;
        }
        else
        {
            ans+=('a' + (s[i] - '0' - 1));
            i--;
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<nl;
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
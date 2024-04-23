/*
 * author: saifabrar
 * created: 2024-04-23 15:43:24
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>


string LCS(string x, string y, int m, int n)
{
    int maxLen = 0, endIndex = 0, lookUp[m+1][n+1];
    memset(lookUp,0,sizeof(lookUp));
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(x[i-1] == y[j-1])
            {
                lookUp[i][j] = lookUp[i-1][j-1] + 1;
                if(lookUp[i][j] > maxLen)
                {
                    maxLen = lookUp[i][j];
                    endIndex = i;
                }
            }
        }
    }
    return x.substr(endIndex-maxLen,maxLen);
}
void solve()
{
    string a,b; cin>>a>>b;
    if(a==b){
        cout<<0<<nl;
        return;
    }
    string ans = LCS(a,b,a.size(),b.size());
    cout<<a.size() - ans.size() + b.size() - ans.size()<<nl;
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
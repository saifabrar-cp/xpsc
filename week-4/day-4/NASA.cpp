/*
* author: saifabrar
* created: 2024-04-15 15:18:56
* problem link: 
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl  '\n'
#define pii pair<ll,ll>
const int maxN = (1 << 15);
vector<int> palindrome;
void make_palindrome()
{
    for(int i=0; i < maxN; i++)
    {
        string s = to_string(i);
        int sz = s.size();
        bool ok = true;
        for(int j=0;j<sz/2;j++)
        {
            if(s[j] != s[sz - j - 1])
            {
                ok = false;
                break;
            }
        }
        if(ok)
            palindrome.push_back(i);
    }
}
int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie(0);
    cout.tie(0);
    
    make_palindrome();
    int t;
    cin>> t;
    
    while(t--)
    {
        int n;cin>>n;
        vector<int> cnt(maxN),a;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            cnt[x]++;
            a.push_back(x);
        }
        ll ans = n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<palindrome.size();j++)
            {
                int cur = (a[i] ^ palindrome[j]);
                ans += cnt[cur];
            }
        }
        cout<<ans/2<<nl;
    }
    return 0;
}

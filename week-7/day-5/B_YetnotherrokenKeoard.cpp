/*
 * author: saifabrar
 * created: 2024-05-07 23:23:21
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    string s1,s2;cin>>s1;
    ll n = s1.size(),b=0,B=0;
    for(int i=n-1;i>=0;i--)
    {
        if(s1[i] == 'b') b++;
        else if(s1[i] == 'B') B++;
        else
        {
            if(s1[i] >= 'a' && s1[i] <= 'z')
            {
                if(b) b--;
                else s2.push_back(s1[i]);
            }
            else if(s1[i] >= 'A' && s1[i] <= 'Z')
            {
                if(B) B--;
                else s2.push_back(s1[i]);
            }
        }
    }
    reverse(s2.begin(),s2.end());
    cout<<s2<<nl;
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
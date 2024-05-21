/*
 * author: saifabrar
 * created: 2024-05-21 20:15:34
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    string s;
    cin >> s;
    map<char, string> m;
    for(char c:s)
    {
        if(m.count(c)) m[c]+=c;
        else m[c] = c;
    }
    string fir = "", las = "", odd = "";
    for(auto c:m)
    {
        if(c.second.length() % 2 == 1 && odd != "")
        {
            cout << "NO SOLUTION";
            return;
        }
        else if(c.second.length() % 2 == 1) odd = c.second;
        else 
        {
            fir = c.second.substr(0, c.second.length()/2) + fir;
            las += c.second.substr(0, c.second.length()/2);
        }
    }
    cout << las + odd + fir;
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
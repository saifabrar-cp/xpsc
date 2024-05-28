/*
 * author: saifabrar
 * created: 2024-05-28 19:42:45
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int len; 
    cin >> len;
    string st; 
    cin >> st;
    int x = 0, y = 0;
    for(char c:st)
    {
        if(c == 'N') y++;
        else if(c == 'S') y--;
        else if(c == 'E') x++;
        else x--;
    }
    if((abs(x) % 2 == 1 || abs(y) % 2 == 1) || (len == 2 && x == 0 && y == 0))
    {
        cout << "NO" << nl;
        return;
    }
    int n = 0,s = 0,e = 1,w = 1;
    char m[2] = {'R','H'};
    string ans = "";
    for(char c:st)
    {
        if(c == 'N') ans += m[n], n = 1 - n;
        else if(c == 'S') ans += m[s], s = 1 - s;
        else if(c == 'E') ans += m[e],e = 1 - e;
        else ans += m[w], w = 1 - w;
    }
    cout << ans << endl;
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
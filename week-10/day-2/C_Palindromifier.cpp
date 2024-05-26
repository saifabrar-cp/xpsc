/*
* author: saifabrar
* created: 2024-05-26 20:05:09
* problem link: 
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl  '\n'
#define pii pair<ll,ll>
int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie(0);
    cout.tie(0);
    
    string s, x; 
    cin >> s;
    int n = s.size();
    x = s;
    reverse(x.begin(), x.end());
    if(x==s) cout << 0 << nl;
    else{
        cout << 3 << nl;
        cout << 'R' << " " << n-1 << nl;
        cout << 'L' << " " << n << nl;
        cout << 'L' << " " << 2 << nl;
    }
    return 0;
}
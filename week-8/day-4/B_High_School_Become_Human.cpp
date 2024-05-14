/*
* author: saifabrar
* created: 2024-05-14 22:12:49
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
    
    double x, y, a, b;
    cin >> x >> y;
    a = y * log(x);
    b = x * log(y);
    if(a > b)
        cout << ">";
    else if(a < b)
        cout << "<";
    else
        cout << "=";
    return 0;
}
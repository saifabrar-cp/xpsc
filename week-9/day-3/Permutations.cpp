/*
* author: saifabrar
* created: 2024-05-20 19:52:07
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
    
    ll n;
    cin >> n;
    vector<ll> a;
    int i = 1, j = 2;
    while(j <= n)
    {
        a.push_back(j);
        j += 2;
    }
    while(i <= n)
    {
        a.push_back(i);
        i += 2;
    }
    if(n <= 3 && n != 1)
        cout << "NO SOLUTION";
    else if(n == 1)
        cout << 1;
    else
    {
        for(ll i:a)
            cout << i << " ";
    }
    return 0;
}
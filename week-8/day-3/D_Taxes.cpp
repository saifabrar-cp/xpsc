/*
* author: saifabrar
* created: 2024-05-13 20:41:00
* problem link: 
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl  '\n'
#define pii pair<ll,ll>
bool prime(ll n)
{
    if(n == 1 || n == 0)
        return false;
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0) return false;
    return true;
}
int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie(0);
    cout.tie(0);
    
    ll n;
    cin >> n;

    if(prime(n)) cout << 1;
    else
    {
        if(n % 2 == 1)
        {
            if(prime(n - 2)) cout << 2;
            else cout << 3;
        }
        else
            cout << 2;
    }
    return 0;
}
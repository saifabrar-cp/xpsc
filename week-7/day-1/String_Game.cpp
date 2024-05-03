/*
 * author: saifabrar
 * created: 2024-05-03 23:06:50
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    ll n;cin>>n;
    string s;cin>>s;
    ll one(0),zero(0);
    
    for(char c:s)
        c == '1' ? one++ : zero++;
    ll mn = min(one,zero);
    cout<< (mn%2==0 ? "Ramos" : "Zlatan")<<nl;
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
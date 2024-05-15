/*
 * author: saifabrar
 * created: 2024-05-15 15:34:07
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>
vector<ll> primes = { 2,3,5,7,11,13,17,19,23,29,31 };
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    map<ll, vector<ll>> mp;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= 10; j++)
        {
            if(a[i] % primes[j] == 0)
            {
                mp[primes[j]].push_back(i);
                break;
            }
        }
    }
    vector<ll> ans(n);
    ll col = 0;
    for(auto v:mp)
    {
        col++;
        for(auto i : v.second)
            ans[i] = col;
    }
    cout << col << nl;
    for(auto val : ans)
        cout << val << " ";
    cout << nl;
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
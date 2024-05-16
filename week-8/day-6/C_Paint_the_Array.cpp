/*
 * author: saifabrar
 * created: 2024-05-16 19:39:26
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n;cin>>n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    ll gc1 = a[0], gc2 = a[1];
    for(int i = 2; i < n; i++)
    {
        if(i % 2 == 0)
            gc1 = __gcd(gc1, a[i]);
        else
            gc2 = __gcd(gc2, a[i]);
    }
    bool flag1 = false, flag2 = false;
    for(int i = 0; i < n; i+=2)
    {
        if(gc2 != 0 && a[i] % gc2 == 0)
            flag1 = true;
    }
    for(int i = 1; i < n; i+=2)
    {
        if(gc1 != 0 && a[i] % gc1 == 0)
            flag2 = true;
    }
    !flag1 ? cout << gc2 : !flag2 ? cout << gc1 : cout << 0;
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
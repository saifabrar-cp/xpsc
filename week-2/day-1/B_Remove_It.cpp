#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, x;
    cin >> n >> x;
    vector<ll> a(n), b;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] != x)
            b.push_back(a[i]);
    }
    if (!b.empty())
    {
        for (ll d : b)
            cout << d << " ";
    }
    else
        cout << nl;
    return 0;
}
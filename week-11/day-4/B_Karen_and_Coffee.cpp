/*
* author: saifabrar
* created: 2024-06-04 22:24:58
* problem link: 
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl  '\n'
#define pii pair<ll,ll>
const ll N = 2e5 + 9;
const ll MOD = 1e9 + 7;
vector<ll> v1(N), v2(N);

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie(0);
    cout.tie(0);
    
    ll n, k, q, l, r, i;
    cin >> n >> k >> q;

    for (i = 1; i <= N; i++)
    {
        v1[i] = 0;
        v2[i] = 0;
    }

    for (i = 1; i <= n; i++)
    {
        cin >> l >> r;
        v1[l]++;
        v1[r + 1]--;
    }

    for (i = 2; i <= N; i++)
        v1[i] += v1[i - 1];

    for (i = 1; i <= N; i++)
    {
        if (v1[i] >= k)
            v2[i]++;
    }

    for (i = 2; i <= N; i++)
        v2[i] += v2[i - 1];

    while (q--)
    {
        cin >> l >> r;
        cout << v2[r] - v2[l - 1] << nl;
    }
    return 0;
}
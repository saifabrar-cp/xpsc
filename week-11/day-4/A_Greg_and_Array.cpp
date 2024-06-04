/*
* author: saifabrar
* created: 2024-06-04 22:16:02
* problem link: 
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl  '\n'
#define pii pair<ll,ll>
const int N = 100001;
ll x, y, i, a[N], b[N], c[N], d[N], l[N], r[N], n, m, k;
int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> n >> m >> k;
    for (i = 1; i <= n; ++i) 
        cin >> a[i];
 
    for (i = 1; i <= m; ++i)
        cin >> l[i] >> r[i] >> d[i];

    for (i = 1; i <= k; ++i) 
    {
        cin >> x >> y;
        b[x]++;
        b[y + 1]--;
 
    }
    for (i = 1; i <= m; ++i) 
    {
        b[i] += b[i - 1];
        c[l[i]] += b[i] * d[i];
        c[r[i] + 1] -= b[i] * d[i];
    }
    for (i = 1; i <= n; ++i) 
    {
        c[i] += c[i - 1];
        cout << c[i] + a[i] << " ";
    }
    return 0;
}
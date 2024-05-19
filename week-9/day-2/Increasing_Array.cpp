/*
* author: saifabrar
* created: 2024-05-19 23:02:17
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
    
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    ll res = 0;

    for(int i = 1; i < n; i++)
    {
        if(a[i] >= a[i - 1])
            continue;
        res += abs(a[i] - a[i - 1]);
        a[i] = a[i - 1];
    }

    cout << res;
    return 0;
}
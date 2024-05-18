/*
* author: saifabrar
* created: 2024-05-18 20:14:51
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
    
    int n, x;
    cin >> n >> x;
    vector<pair<ll, int>> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(),a.end());
    for(int i = 0; i < n; i++)
    {
        ll x2 = x - a[i].first;
        for(int j = i + 1, k = n - 1; j < k; j++)
        {
            while(a[j].first + a[k].first > x2)
                k--;

            if( j < k && a[j].first + a[k].first == x2)
            {
                cout << a[i].second << " " << a[j].second << " " << a[k].second;
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}
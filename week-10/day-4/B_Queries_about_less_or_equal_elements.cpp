/*
* author: saifabrar
* created: 2024-05-28 19:48:54
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
    
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        int y = upper_bound(a.begin(),a.end(),x) - a.begin();
        cout << y << " ";
    }
    return 0;
}
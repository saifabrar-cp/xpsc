/*
* author: saifabrar
* created: 2024-05-18 20:05:50
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
    int start = 0, ans = 0;
    set<int> s;
    for(int i = 0; i < n; i++)
    {
        while(s.count(a[i]))
        {
            s.erase(a[start]);
            start++;
        }
        s.insert(a[i]);
        ans = max(ans, (int)s.size());
    }
    cout << ans << nl;
    return 0;
}
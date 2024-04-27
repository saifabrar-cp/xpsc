/*
* author: saifabrar
* created: 2024-04-27 22:44:47
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
    
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    sort(a.begin(),a.end());

    auto ok = [&](long long mid)
    {
        long long cnt = 0;
        for(int i = n/2;i < n; i++)
            cnt += (a[i] < mid ? (mid - a[i]) : 0);
        return cnt <= k;
    };

    long long l = 1, r = 2e9, mid, ans = 0;

    while(l <= r)
    {
        mid = l + (r - l) / 2;
        if(ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else 
            r = mid - 1;
    }

    cout << ans << nl;
    return 0;
}
/*
* author: saifabrar
* created: 2024-04-27 22:36:31
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
    
    int n, t;cin>>n>>t;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    auto ok = [&](long long m)
    {
        long long total = 0;
        for(int i=0;i<n;i++)
        {
            total += (m / a[i]);
            if(total >= t)
                return true;
        }
        return false;
    };

    long long l = 1, r = 1e18, mid, ans;

    while(l <= r)
    {
        mid = l + (r - l) / 2;
        if(ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else 
            l = mid + 1;
    }

    cout<< ans<<nl;
    return 0;
}
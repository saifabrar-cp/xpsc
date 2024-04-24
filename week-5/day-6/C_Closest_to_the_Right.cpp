/*
* author: saifabrar
* created: 2024-04-24 16:08:30
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
    
    int n,q;cin>>n>>q;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    while(q--)
    {
        int k;cin>>k;
        int l=0,r=n-1,ans=n,mid;
        while(l<=r)
        {
            mid = (l + r)/ 2;
            if(k <= a[mid])
            {
                ans = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        ans != n ? cout<<ans + 1 : cout<<n+1;
        cout<<nl;
    }
    return 0;
}
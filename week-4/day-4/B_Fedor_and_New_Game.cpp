/*
* author: saifabrar
* created: 2024-04-15 15:16:06
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
    
    int n,m,k;cin>>n>>m>>k;
    vector<ll> a(m+1);
    for(int i=0;i<m+1;i++)
        cin>>a[i];
    
    vector<vector<int>> all;
    for(int i=0;i<m+1;i++)
    {
        vector<int> v;
        for(int k=0; k < n; k++)
        {
            if((a[i] >> k) & 1)
                v.push_back(1);
            else 
                v.push_back(0);
        }
        all.push_back(v);
    }

    int ans=0;
    for(int i=0;i<m;i++)
    {
        vector<int> v = all[i];
        int cnt=0;
        for(int k=0; k < n;k++)
        {
            if(all[m][k] != v[k])
                cnt++;
        }
        if(cnt <= k)
            ans++;
    }
    cout<<ans;
    return 0;
}
/*
* author: saifabrar
* created: 2024-04-26 15:45:42
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
    int n,q,c=1;
    while(cin>>n && cin>>q)
    {
        if(n==0 && q == 0) break;

        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
            cout<<"CASE# "<<c<<":"<<nl;
        while(q--)
        {
            int x;cin>>x;
            auto it = lower_bound(a.begin(),a.end(),x);
            if(*it != x)
                cout<<x<<" not found"<<nl;
            else
                cout<<x<<" found at "<<it - a.begin() + 1<<nl;
        }
            c++;
    }
    return 0;
}
/*
* author: saifabrar
* created: 2024-04-26 16:08:53
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
    
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
        cin>> a[i];

    int q;cin>>q;
    while(q--)
    {
        int x;cin>>x;
        auto lb = lower_bound(a.begin(),a.end(),x);
        auto ub = upper_bound(a.begin(),a.end(),x);
        int high = ub - a.begin();
        lb--;
        int low = lb - a.begin();
        if(lb == a.end() || lb - a.begin() < 0)
            cout<<"X "<<a[high]<<nl;
        else if(ub == a.end())
            cout<<a[low]<<" X"<<nl;
        else
            cout<<a[low]<<" "<<a[high]<<nl;
    }
    return 0;
}
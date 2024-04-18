/*
* author: saifabrar
* created: 2024-04-18 19:33:47
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
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<(1 << n);i++)
    {
        int sum = 0;
        for(int j=0;j<n;j++)
        {
            if(i & (1 << j)) sum += a[j];
            else sum -= a[j];
        }
        if(sum % 360==0)
        {
            cout<<"YES"<<nl;
            return 0;
        }
    }
    cout<<"NO"<<nl;
    return 0;
}
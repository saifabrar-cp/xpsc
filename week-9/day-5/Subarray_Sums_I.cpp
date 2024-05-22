/*
* author: saifabrar
* created: 2024-05-22 21:26:47
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
    
    ll n, s;
    cin>>n >> s;
    vector<ll> a(n);
    for(int i = 0; i < n; i++)
        cin>>a[i];
    int i=0,j=0,sum=0,mx=0;
    while(j<n){
        sum+=a[j];
        while(sum>s){
            sum-=a[i];
            i++;
        }
        if(sum==s){
            mx++;
        }
        j++;
    }
    cout<<mx; 
    return 0;
}
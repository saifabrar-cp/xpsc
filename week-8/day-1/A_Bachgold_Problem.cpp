/*
* author: saifabrar
* created: 2024-05-11 22:57:59
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

    vector<int> a;
    if(n%2==1)
    {
        a.push_back(3);
        n-=3;
    }
    while(n>0)
    {
        a.push_back(2);
        n-=2;
    }
    cout<<a.size()<<nl;
    for(int v:a)
        cout<<v<<" ";
    return 0;
}
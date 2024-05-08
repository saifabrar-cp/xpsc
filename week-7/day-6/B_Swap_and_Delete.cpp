/*
 * author: saifabrar
 * created: 2024-05-08 20:23:24
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    string s; cin>>s;
    int n=s.size();
    if(s.size()<=1){
        cout<<1<<nl;
        return;
    }
    int one=0,zero=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0') zero++;
        else one++;
    }
    if(one==zero){
        cout<<0<<nl;
        return;
    }
    string tmp=s;
    for(int i=0;i<n;i++){
        if(s[i]=='0' && one>0){
            s[i]='1';
            one--;
        }
        else if(s[i]=='1' && zero>0){
            s[i]='0';
            zero--;
        }
    }
    int cnt=0,idx=0;
    for(int i=0;i<n;i++){
        if(s[i]!=tmp[idx]){
            idx++;
            continue;
        }
        else{
            cnt++;
        }
    }
    cout<<cnt<<nl;
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
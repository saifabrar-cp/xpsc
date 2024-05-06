/*
 * author: saifabrar
 * created: 2024-05-06 22:10:08
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
   int q;cin>>q;
   vector<int> a;
   int bad = 0;
   for(int i=0;i<q;i++) 
   {
        int x;cin>>x;
        if(a.empty())
        {
            a.push_back(x);
            cout<<1;
        }
        else
        {
            int badb= bad - (a.back() > a[0]) + (a.back() > x) + (x > a[0]);
            if(badb <= 1)
            {
                bad = badb;
                a.push_back(x);
                cout<<1;
            }
            else
                cout<<0;
        }
   }
   cout<<nl;
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
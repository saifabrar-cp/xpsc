/*
 * author: saifabrar
 * created: 2024-06-01 12:10:30
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n; 
    cin>>n;
    vector<int> ans;
    ans.push_back(n);
    while(__builtin_popcount(n) > 1){
        int p = __builtin_ctz(n);
        n -= (1<<p);
        ans.push_back(n);
    }
    while(n > 1){
        n /= 2;
        ans.push_back(n);
    }
    cout << ans.size() << nl;
    for(auto val:ans){
        cout << val << " ";
    }
    cout << nl;
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
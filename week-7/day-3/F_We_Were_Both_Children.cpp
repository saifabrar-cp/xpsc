/*
 * author: saifabrar
 * created: 2024-05-05 23:02:12
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n;cin>>n;
    vector<int> cnt(n+1);
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        if(x <= n) cnt[x]++;
    }
    for(int i=n;i>=1;i--)
    {
        for(int j = 2 * i; j <= n; j+=i)
            cnt[j] += cnt[i];
    }

    auto ans = max_element(cnt.begin(),cnt.end());
    cout<<*ans<<nl;
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
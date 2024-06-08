/*
 * author: saifabrar
 * created: 2024-06-08 12:33:01
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

void solve()
{
    int n, m;
    cin >> n >> m;
    
    const int N = n + m + 1;
    vector<int> a(N), b(N);
    for (int i = 0; i < N; i++) 
        cin >> a[i];
    
    for (int i = 0; i < N; i++) 
        cin >> b[i];
    
    
    int t = 0;
    int x = 0, y = 0;
    ll sum = 0;
    while (x < n && y < m) 
    {
        if (a[t] > b[t]) 
        {
            sum += a[t];
            x++;
        } 
        else 
        {
            sum += b[t];
            y++;
        }
        t++;
    }
    
    vector<ll> ans(N);
    ll res = sum;
    for (int i = t; i < N; i++) 
        res += x == n ? b[i] : a[i];
    
    for (int i = t; i < N; i++) 
        ans[i] = res - (x == n ? b[i] : a[i]);
    
    for (int i = 0; i < t; i++) 
    {
        if ((x == n) == (a[i] < b[i])) 
            ans[i] = res - max(a[i], b[i]);
        
    }
    
    int ot = t;
    int ox = x;
    if (x == n) 
        x--;
    else 
        y--;
    
    while (x < n && y < m) 
    {
        if (a[t] > b[t]) 
        {
            sum += a[t];
            x++;
        } 
        else 
        {
            sum += b[t];
            y++;
        }
        t++;
    }
    res = sum;
    for (int i = t; i < N; i++)
        res += x == n ? b[i] : a[i];

    for (int i = 0; i < ot; i++) 
    {
        if ((ox == n) == (a[i] > b[i]))
            ans[i] = res - max(a[i], b[i]);
    }
    
    for (int i = 0; i < N; i++)
        cout << ans[i] << " \n"[i == N - 1];
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
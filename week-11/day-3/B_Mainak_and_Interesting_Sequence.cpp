/*
 * author: saifabrar
 * created: 2024-06-03 19:53:56
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
    
    if (n > m) 
    {
        cout << "No" << nl;
        return;
    }
    
    if (n % 2 == 0 && m % 2 != 0) 
    {
        cout << "No\n";
        return;
    }
    
    vector<int> a(n, 1);
    if (n % 2 == 0) 
    {
        a[n - 2] += (m - n) / 2;
        a[n - 1] += (m - n) / 2;
    } 
    else
        a[n - 1] += m - n;

    
    cout << "Yes" << nl;
    for (int i = 0; i < n; i++)
        cout << a[i] << " \n"[i == n - 1];

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
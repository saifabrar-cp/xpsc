/*
 * author: saifabrar
 * created: 2024-05-15 15:47:30
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>
bool prime(int n)
{
    if (n == 1 || n == 0)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
void solve()
{
    int d;
    cin >> d;
    int a = 1 + d;
    while(!prime(a))
        a++;
    int b = a + d;
    while(!prime(b))
        b++;
    cout << a * b << nl;
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
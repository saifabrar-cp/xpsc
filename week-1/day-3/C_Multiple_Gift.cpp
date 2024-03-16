#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll x, y;
    cin >> x >> y;
    ll cnt = 1;
    while (x * 2 <= y)
    {
        x *= 2;
        cnt++;
    }
    cout << cnt;
    return 0;
}
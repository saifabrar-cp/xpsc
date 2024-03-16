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

    int a, b, c;
    cin >> a >> b >> c;
    while (c % b && c > 0)
        c -= a;
    c >= 0 ? cout << "Yes" : cout << "No";
    return 0;
}
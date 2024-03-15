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

    int a, b, t;
    cin >> a >> b >> t;
    int cnt = 0, i = 1;
    while (i * a <= (t * 1.0) + 0.5)
    {
        cnt++;
        i++;
    }
    cout << cnt * b;
    /*
    another way
    cout << (t / a) * b;
    */
    return 0;
}
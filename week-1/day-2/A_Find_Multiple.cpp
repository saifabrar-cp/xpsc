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
    bool flag = false;
    /* int i = 1;
    while (true)
    {
        if (c * i >= a && c * i <= b)
        {
            flag = true;
            break;
        }
        if (c * i > b)
            break;
        i++;
    } */
    int res;
    for (int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            flag = true;
            res = i;
            break;
        }
    }
    flag ? cout << res : cout << -1;
    return 0;
}
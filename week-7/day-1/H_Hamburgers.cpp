/*
 * author: saifabrar
 * created: 2024-05-03 22:35:52
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>
ll nb, ns, nc, pb, ps, pc, r;
bool good(ll x, string str)
{
    ll b = 0, s = 0, c = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'B')
            b++;
        if (str[i] == 'S')
            s++;
        if (str[i] == 'C')
            c++;
    }
    return (((b * x) - min((b * x), nb)) * pb + ((c * x) - min((c * x), nc)) * pc + ((s * x) - min((s * x), ns)) * ps) <= r;
}
void solve()
{
    string s;
    cin >> s;
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> r;
    ll l = 0, r = 1;
    while (good(r, s))
        r *= 2;
    while (r > l + 1)
    {
        ll m = l + ((r - l) / 2);
        if (good(m, s))
            l = m;
        else
            r = m;
    }
    cout << l;
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T=1;
    while (T--)
    {
        solve();
    }
    return 0;
}
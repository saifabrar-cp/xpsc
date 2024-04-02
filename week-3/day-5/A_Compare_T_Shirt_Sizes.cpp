/*
 * author: saifabrar
 * created: 2024-04-02 17:02:54
 * problem link:
 */
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

    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;

        int as = a.size(), bs = b.size(), al = as - 1, bl = bs - 1;

        if (a == b)
            cout << '=';
        else if (a[al] != b[bl])
        {
            if (a[al] == 'S')
                cout << '<';
            else if (a[al] == 'L')
                cout << '>';
            else
            {
                if (b[bl] == 'S')
                    cout << '>';
                else
                    cout << '<';
            }
        }
        else
        {
            if (a[al] == 'S')
            {
                if (as - 1 > bs - 1)
                    cout << '<';
                else
                    cout << '>';
            }
            else
            {
                if (as - 1 > bs - 1)
                    cout << '>';
                else
                    cout << '<';
            }
        }
        cout << nl;
    }
    return 0;
}
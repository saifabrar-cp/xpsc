/*
 * author: saifabrar
 * created: 2024-04-02 16:54:41
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
        int n, q;
        cin >> n >> q;
        map<int, int> a, b;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            if (a.find(x) == a.end())
                a[x] = i;
            b[x] = i;
        }

        while (q--)
        {
            int x, y;
            cin >> x >> y;
            if (a[x] && b[y] && a[x] <= b[y])
                cout << "YES";
            else
                cout << "NO";
            cout << nl;
        }
    }
    return 0;
}
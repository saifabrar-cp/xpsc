/*
 * author: saifabrar
 * created: 2024-04-24 15:25:30
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

    int n, q;
    cin >> n >> q;
    vector<int> a(n), b(q);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < q; i++)
        cin >> b[i];
    for (int i = 0; i < q; i++)
    {
        int l = 0, r = n - 1, mid;
        bool flag = false;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (b[i] == a[mid])
            {
                flag = true;
                break;
            }
            else if (b[i] < a[mid])
                r = mid - 1;
            else if (b[i] > a[mid])
                l = mid + 1;
        }
        flag ? cout << "YES" : cout << "NO";
        cout << nl;
    }
    return 0;
}
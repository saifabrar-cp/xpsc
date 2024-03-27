/*
 * author: saifabrar
 * created: 2024-03-27 15:00:37
 * problem link: https://codeforces.com/problemset/problem/1610/B
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>
bool palindrom(vector<int> a, int x)
{
    int n = a.size(), i = 0, j = n - 1;
    while (i < j)
    {
        if (a[i] == x)
            i++;
        else if (a[j] == x)
            j--;
        else if (a[i] != a[j])
            return false;
        else
        {
            i++;
            j--;
        }
    }
    return true;
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        bool flag = true;
        for (int i = 0; i < n - i - 1; i++)
        {
            if (a[i] != a[n - i - 1])
            {
                flag = (palindrom(a, a[i]) || palindrom(a, a[n - i - 1]));
                break;
            }
        }
        flag ? cout << "YES" : cout << "NO";
        cout << nl;
    }
    return 0;
}
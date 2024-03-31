/*
 * author: saifabrar
 * created: 2024-03-31 16:37:11
 * problem link: https://codeforces.com/problemset/problem/1722/D
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
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<ll> v;

        ll sum = 0, cnt = 0;

        for (int i = 0; i < n; i++)
        {
            ll l = i, r = n - i - 1;
            if (s[i] == 'L')
            {
                if (r > l)
                {
                    cnt++;
                    sum += r;
                    v.push_back(r - l);
                }
                else
                    sum += l;
            }
            else
            {
                if (l > r)
                {
                    cnt++;
                    sum += l;
                    v.push_back(l - r);
                }
                else
                    sum += r;
            }
        }

        vector<ll> ans(n + 1);

        for (int i = cnt; i <= n; i++)
            ans[i] = sum;

        sort(v.begin(), v.end(), greater<ll>());

        for (int i = cnt - 1; i >= 1; i--)
        {
            sum -= v.back();
            v.pop_back();
            ans[i] = sum;
        }
        for (int i = 1; i <= n; i++)
            cout << ans[i] << ' ';

        cout << nl;
    }
    return 0;
}
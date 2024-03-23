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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<pair<int, string>> p;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            string s;
            cin >> s;
            p.push_back({x, s});
        }
        for (int i = 0; i < n; i++)
        {
            for (char c : p[i].second)
            {
                if (c == 'D')
                {
                    if (a[i] == 9)
                    {
                        a[i] = 0;
                        continue;
                    }
                    a[i]++;
                }
                else
                {
                    if (a[i] == 0)
                    {
                        a[i] = 9;
                        continue;
                    }
                    a[i]--;
                }
            }
            cout << a[i] << " ";
        }
        cout << nl;
    }
    return 0;
}
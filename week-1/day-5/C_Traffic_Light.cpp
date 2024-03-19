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
        char c;
        cin >> c;
        string s;
        cin >> s;
        s += s;
        bool flag = false;
        int cnt, res;
        cnt = res = 0;
        if (c == 'g')
        {
            cout << 0 << nl;
            continue;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'g')
            {
                res = max(res, cnt);
                flag = false;
            }
            if (s[i] == c && !flag)
            {
                flag = true;
                cnt = 0;
            }
            if (flag)
                cnt++;
        }
        cout << res << nl;
    }
    return 0;
}
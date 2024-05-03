/*
* author: saifabrar
* created: 2024-05-03 12:38:59
* problem link: 
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl  '\n'
#define pii pair<ll,ll>
int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie(0);
    cout.tie(0);
    string t, p;
    cin >> t;
    cin >> p;
    int n = t.size(), m = p.size();
    vector<int> a(n);
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }

    auto ok = [&](int mid) {
        vector<bool> bad(n + 1);
        for (int i = 0;i < mid;i++) {
            bad[a[i]] = true;
        }
        int j = 0;
        bool found = false;
        for (int i = 0;i < n;i++) {
            if (t[i] == p[j] && !bad[i + 1]) {
                j++;
            }
            if (j == m) {
                found = true;
                break;
            }
        }
        return found;
        };

    int l = 0, r = n, mid, ans = 0;
    while (l <= r) {
        mid = l + (r - l) / 2;
        if (ok(mid)) {
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }

    cout << ans << '\n';
    return 0;
}
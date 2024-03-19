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

    int n;
    cin >> n;

    int a[n], cnt[n + 1] = {0};
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }
    int ans;
    for (int i = 1; i <= n; i++)
    {
        if (cnt[i] == 0)
        {
            ans = i;
            break;
        }
    }
    cout << ans;
    return 0;
}
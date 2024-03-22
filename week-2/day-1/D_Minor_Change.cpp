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

    string a, b;
    cin >> a >> b;
    int cnt = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i])
            cnt++;
    }
    cout << cnt;
    return 0;
}
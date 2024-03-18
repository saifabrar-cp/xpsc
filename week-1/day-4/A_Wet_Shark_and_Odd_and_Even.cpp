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
    ll a[n];
    ll sum = 0;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if (a[i] % 2 == 1)
            v.push_back(a[i]);
    }
    if (sum % 2 == 0)
        cout << sum;
    else
    {
        sort(v.begin(), v.end());
        cout << sum - v[0];
    }
    return 0;
}
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
    string a = "Timur";
    sort(a.begin(), a.end());
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        if (a == s)
            cout << "YES";
        else
            cout << "NO";
        cout << nl;
    }
    return 0;
}
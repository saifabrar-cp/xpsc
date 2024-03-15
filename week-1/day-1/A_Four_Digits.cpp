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

    string s;
    cin >> s;
    if (s.size() == 4)
        cout << s;
    else if (s.size() == 3)
        cout << "0" << s;
    else if (s.size() == 2)
        cout << "00" << s;
    else
        cout << "000" << s;
    return 0;
}
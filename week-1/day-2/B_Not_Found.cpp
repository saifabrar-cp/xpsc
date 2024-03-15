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
    int fre[26] = {0};
    for (char c : s)
        fre[c - 'a']++;
    bool flag = false;
    for (int i = 0; i < 26; i++)
    {
        if (fre[i] == 0)
        {
            flag = true;
            cout << char(i + 'a');
            break;
        }
    }
    if (!flag)
        cout << "None";
    return 0;
}
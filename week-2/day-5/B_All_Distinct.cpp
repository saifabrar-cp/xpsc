/*
 * author: saifabrar
 * created: 2024-03-26 15:36:27
 * problem link: https://codeforces.com/problemset/problem/1692/B
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
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        if ((n - st.size()) % 2 == 0)
            cout << st.size();
        else
            cout << st.size() - 1;
        cout << nl;
    }
    return 0;
}
/*
 * author: saifabrar
 * created: 2024-04-27 22:52:53
 * problem link: 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

const int maxN = 1e4;
vector<long long> pw;
void solve()
{
    long long x;
    cin>>x;
    bool found = false;

    for(int i=0;i<maxN;i++)
    {
        if(pw[i] >= x) break;

        int l = 0, r = maxN - 1, mid;
        long long need = x - pw[i];
        bool ok = false;

        while(l <= r)
        {
            mid = l + (r - l) / 2;
            if(pw[mid] == need)
            {
                ok = true;
                break;
            }
            else if(pw[mid] > need)
                r = mid - 1;
            else 
                l = mid + 1;
        }
        if(ok)
        {
            found = true;
            break;
        }
    }

    found ? cout<<"YES" : cout<<"NO";
    cout<<nl;
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    for(int i = 1; i <= maxN; i++)
        pw.push_back(pow(i,3));
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
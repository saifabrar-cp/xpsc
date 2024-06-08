/*
* author: saifabrar
* created: 2024-06-08 21:54:50
* problem link: 
*/
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define nl  '\n'
#define pii pair<ll,ll>
#define sz(yo) (ll)yo.size()

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    vector<string> odd, even;
    for (int i = 0;i < n;i++) {
        string s;
        cin >> s;
        if (sz(s) & 1) {
            odd.push_back(s);
        }
        else {
            even.push_back(s);
        }
    }
 
    sort(odd.begin(), odd.end(), [&](string& x, string& y) {
        return x.size() < y.size();
        });
 
    sort(even.begin(), even.end(), [&](string& x, string& y) {
        return x.size() < y.size();
        });
 
    int N = sz(odd), M = sz(even);
    gp_hash_table<ll, gp_hash_table<ll, ll>> cnt1, cnt2;
    ll ans = n;
 
    for (int i = 0;i < N;i++) {
        int s = 0;
        vector<int> pref;
        pref.push_back(0);
        for (auto d : odd[i]) {
            s += (d - '0');
            pref.push_back(s);
        }
        int curr_sz = sz(pref) - 1, L, R;
        L = (curr_sz + 1) / 2;;
        R = curr_sz;
 
        while (L <= R) {
            int s1, s2, now = 0, len = 0;
            s1 = pref[L];
            s2 = pref[R] - pref[L];
            s2 = (s1 - s2);
            len = L - (R - L);
            ans += cnt1[len][s2];
            L++;
        }
 
        L = (curr_sz + 1) / 2;
        while (L >= 1) {
            int s1, s2, now = 0, len = 0;
            s1 = pref[R] - pref[L - 1];
            s2 = pref[L - 1];
            s2 = (s1 - s2);
            len = ((R - L) + 1) - (L - 1);
            ans += cnt1[len][s2];
            L--;
        }
        cnt1[curr_sz][pref[curr_sz]]++;
    }
 
    for (int i = 0;i < M;i++) {
        int s = 0;
        vector<int> pref;
        pref.push_back(0);
        for (auto d : even[i]) {
            s += (d - '0');
            pref.push_back(s);
        }
        int curr_sz = sz(pref) - 1, L, R;
        L = (curr_sz + 1) / 2;;
        R = curr_sz;
 
        while (L <= R) {
            int s1, s2, now = 0, len = 0;
            s1 = pref[L];
            s2 = pref[R] - pref[L];
            s2 = (s1 - s2);
            len = L - (R - L);
            ans += cnt2[len][s2];
            L++;
        }
 
        L = (curr_sz + 1) / 2;
        while (L >= 1) {
            int s1, s2, now = 0, len = 0;
            s1 = pref[R] - pref[L - 1];
            s2 = pref[L - 1];
            s2 = (s1 - s2);
            len = ((R - L) + 1) - (L - 1);
            ans += cnt2[len][s2];
            L--;
        }
        cnt2[curr_sz][pref[curr_sz]]++;
    }
    cout << ans << nl;
    return 0;
}
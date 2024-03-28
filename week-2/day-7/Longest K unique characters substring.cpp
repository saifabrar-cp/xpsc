//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    int longestKSubstr(string s, int k)
    {
        // your code here
        int l = 0, r = 0, cnt = 0;
        vector<int> v;
        int n = s.size();
        int fre[26] = {0};
        while (r < n)
        {
            fre[s[r] - 'a']++;
            if (fre[s[r] - 'a'] == 1)
                cnt++;
            if (cnt == k)
                v.push_back(r - l + 1);
            if (cnt > k)
            {
                fre[s[l] - 'a']--;
                if (fre[s[l] - 'a'] == 0)
                    cnt--;
                l++;
            }
            r++;
        }
        if (v.empty())
            return -1;
        else
            return v[v.size() - 1];
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

/

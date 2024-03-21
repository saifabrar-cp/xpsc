//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    int search(string pat, string txt)
    {
        // code here
        vector<int> fre(26);
        for (char c : pat)
            fre[c - 'a']++;

        int l = 0, r = 0, ans = 0, n = txt.size(), k = pat.size();
        bool flag = true;
        while (r < n)
        {
            fre[txt[r] - 'a']--;
            if ((r - l + 1) == k)
            {
                for (int i : fre)
                {
                    if (i != 0)
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                    ans++;
                flag = true;
                fre[txt[l] - 'a']++;
                l++;
            }
            r++;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
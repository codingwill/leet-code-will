class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        int n = s.size();
        int countIndex = 0;
        string ans = "";
        for (int i = n-1; i >= 0; --i) {
            if (s[i] != '-') {
                if (countIndex == k) {
                    ans.push_back('-');
                    countIndex %= k;
                }
                countIndex++;
                if (s[i] >= 'a') {
                    s[i] = s[i] - ('a' - 'A');
                }
                ans.push_back(s[i]);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
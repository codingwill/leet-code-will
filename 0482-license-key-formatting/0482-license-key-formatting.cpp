class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        int n = s.size();
        int countIndex = 0;
        vector<char> ansArr;
        string ans = "";
        for (int i = n-1; i >= 0; --i) {
            if (s[i] != '-') {
                if (countIndex == k) {
                    ansArr.push_back('-');
                    countIndex %= k;
                }
                countIndex++;
                if (s[i] >= 'a') {
                    s[i] = s[i] - ('a' - 'A');
                }
                ansArr.push_back(s[i]);
            }
        }
        for (int i = ansArr.size()-1; i >= 0; --i) {
            ans.push_back(ansArr[i]);
        }
        return ans;
    }
};
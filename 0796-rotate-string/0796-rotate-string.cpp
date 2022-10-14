class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() > goal.length()) return false;
        int len = s.length();
        for (int i = 0; i < len; ++i) {
            string sub1, sub2;
            sub1 = s.substr(0, len-i);
            if (len-i < len) {
                sub2 = s.substr(len-i,len - (len-i));
            }
            else {
                sub2 = "";
            }
            if (goal.find(sub1) != -1 && goal.find(sub2) != -1) {
                return true;
            }
        }
        return false;
    }
};
class Solution 
{
public:
    int balancedStringSplit(string s) 
    {
        int r = 0, l = 0;
        int ans = 0;
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == 'R') r++;
            else l++;
            if (l == r)
            {
                r = 0;
                l = 0;
                ans++;
            }
        }
        return ans;
    }
};
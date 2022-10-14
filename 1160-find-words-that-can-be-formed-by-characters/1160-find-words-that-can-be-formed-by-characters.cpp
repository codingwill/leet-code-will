class Solution 
{
public:
    int countCharacters(vector<string>& words, string chars) 
    {
        vector<int> count(26, 0);
        for (int i = 0; i < chars.length(); ++i)
        {
            count[chars[i] - 'a']++;
        }
        vector<int> countCopy;
        int ans = 0;
        for (int i = 0; i < words.size(); ++i)
        {
            countCopy = count;
            bool can = true;
            for (int j = 0; j < words[i].length(); ++j)
            {
                countCopy[words[i][j] - 'a']--;
                if (countCopy[words[i][j] - 'a'] < 0) can = false;
            }
            if (can) ans += words[i].size();
        }
        return ans;
    }
};
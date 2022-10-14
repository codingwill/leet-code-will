class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> duplicate;
        duplicate = heights;
        sort(heights.begin(), heights.end());
        int count = 0;
        for (int i = 0; i < heights.size(); ++i)
        {
            if (heights[i] != duplicate[i]) ++count;
        }
        return count;
    }
};
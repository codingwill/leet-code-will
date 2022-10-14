class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int newSize = 0;
        int pointer = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] != val) ++newSize;
        }
        pointer = newSize;
        for (int i = 0; i < newSize; ++i)
        {
            if (nums[i] == val)
            {
                while (nums[pointer] == val)
                {
                    ++pointer;
                }
                nums[i] = nums[pointer];
                ++pointer;
            }
        }
        return newSize;
    }
};
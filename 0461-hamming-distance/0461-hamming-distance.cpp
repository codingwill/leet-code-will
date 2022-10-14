class Solution {
public:
    int hammingDistance(int x, int y) {
        vector<int> a(32), b(32);
        //a[] => bits for the x
        int ans = 0;
        for (int i = a.size()-1; i >= 0; --i)
        {
            a[i] = x % 2;
            x = x / 2;
        }
        for (int i = b.size()-1; i >= 0; --i)
        {
            if (y % 2 != a[i]) ++ans;
            y = y / 2;
        }
        return ans;
    }
};
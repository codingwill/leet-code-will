class KthLargest 
{
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    int count = 0;
    KthLargest(int k, vector<int>& nums) {
        if (nums.size() > 0)
        {
            for (int i = 0; i < nums.size(); ++i)
            {
                pq.push(nums[i]);
            }
            for (int i = 0; i < (int)nums.size()-k; ++i)
            {
                pq.pop();
                cout << (int)nums.size()-k << endl;
            }
        }
        count = k;
        
    }
    
    int add(int val) 
    {
        pq.push(val);
        if (pq.size() > count)
        {
            pq.pop();
        }
        return pq.top();
    }
};

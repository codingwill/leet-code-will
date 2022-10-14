class Solution 
{
private:
    
public:
    int minCostClimbingStairs(vector<int>& cost) 
    {
        if (cost.size() == 2) 
            return min(cost[0], cost[1]); 
        for (int i = 2; i < cost.size(); ++i)
        {
            cost[i] = min(cost[i] + cost[i-1], cost[i] + cost[i-2]);
        }
        return min(cost[cost.size()-1], cost[cost.size()-2]);
    }

};

/*
cost = [1, 100, 1, 1, 1, 100, 1, 1, 100, 1]
1 100 1 1 1 100 1 1 100 1
1 100 2 3 3 103 4 5 104 6
*/
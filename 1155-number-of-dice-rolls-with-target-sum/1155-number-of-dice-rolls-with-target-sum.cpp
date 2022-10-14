class Solution 
{
private:
    int MOD = 1e9 + 7;
public:
    int numRollsToTarget(int d, int f, int target) 
    {
        vector<vector<long int>> dp(d+10, vector<long int>(target+10, 0));
        for (int j = 1; j <= f && j <= target; j++) 
        {
            dp[1][j] = 1; 
        }
        for (int i = 2; i <= d; i++) 
        {
            for (int j = 1; j <= target; j++) 
            {
                for (int k = 1; k <= f && k < j; k++)
                {
                    dp[i][j] %= MOD;
                    dp[i][j] += (dp[i-1][j-k] % MOD); 
                }
        
            }
        }
        return dp[d][target] % MOD; 
    }
};

/*
d = 3, f = 6, target = 3
1 1 1 = 1

d = 3, f = 6, target = 4
2 1 1
1 2 1
1 1 2

d = 3, f = 6, target = 5
3 1 1
1 3 1
1 1 3
2 2 1
2 1 2
1 2 2


d = 4, f = 6, target = 5
2 1 1 1 
1 2 1 1 
1 1 2 1
1 1 1 2

d = 4, f = 6, target = 6
3 1 1 1
1 3 1 1
1 1 3 1
1 1 1 3
2 2 1 1
2 1 2 1
2 1 1 2
1 2 2 1
1 2 1 2
1 1 2 2

*/
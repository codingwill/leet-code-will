/**
 * @param {number[]} cost
 * @return {number}
 */
var minCostClimbingStairs = function(cost) {
    const dp = {}
    for (let i = 0; i <= cost.length; ++i) {
        dp[i] = -1;
    }
    
    return Math.min(traverse(cost, dp, cost.length-1), traverse(cost, dp, cost.length-2));
};

/**
 * @param {number} cost
 * @param {number} dp
 * @return {number}
 */
var traverse = (cost, dp, index) => {
    if (index < 0) return 0;
    if (dp[index] >= 0) return dp[index];
    dp[index] = cost[index] + Math.min(traverse(cost, dp, index-1), traverse(cost, dp, index-2));
    
    return dp[index];
}
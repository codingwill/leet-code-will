
/**
 * @param {number} n
 * @return {number}
 */
var climbStairs = function(n) {
    const dp = {}; //hashmap for memoization
    
    for (let i = 0; i <= n; ++i) {
        dp[i] = 0;   
    }
    dp[0] = 1;
    dp[1] = 1;
    return countWays(n, dp);
};

/**
* @param {number} totalSteps
* @param {Object} count
* @return {number} 
*/
var countWays = function(totalSteps, dp) {
    if (dp[totalSteps] > 0) return dp[totalSteps];
    if (totalSteps < 0) {
        return;
    }
    dp[totalSteps] = countWays(totalSteps-1, dp) + countWays(totalSteps-2, dp);
    return dp[totalSteps];
}
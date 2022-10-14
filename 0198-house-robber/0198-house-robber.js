/**
 * @param {number[]} nums
 * @return {number}
 */
var rob = function(nums) {
    var total = 0;
    const dp = {};
    for (let i = 0; i <= nums.length; ++i) {
        dp[i] = -1;
    }
    for (let num of nums) total += num;
    return total - Math.min(traverse(nums, dp, nums.length-1), traverse(nums, dp, nums.length-2));
};

/**
 * @param {number[]} nums
 * @param {Object} dp
 * @param {number} index
 * @return {number}
 */
var traverse = (houseMoney, dp, index) => {
    if (index < 0) return 0;
    if (dp[index] >= 0) return dp[index];
    dp[index] = houseMoney[index] + Math.min(traverse(houseMoney, dp, index-1), traverse(houseMoney, dp, index-2));
    return dp[index];
}
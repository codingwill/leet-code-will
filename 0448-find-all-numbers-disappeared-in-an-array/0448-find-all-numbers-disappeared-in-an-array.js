/**
 * @param {number[]} nums
 * @return {number[]}
 */
var findDisappearedNumbers = function(nums) {
    let isExistArray = new Array(nums.length + 1).fill(false);
    for (let num of nums) {
        isExistArray[num] = true;
    }
    
    let answer = new Array();
    for (let index = 1; index < isExistArray.length; ++index) {
        if (!isExistArray[index]) answer.push(index);
    }
    
    return answer;
};
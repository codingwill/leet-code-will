/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
 var searchInsert = function(nums, target) {
    var answer = binarySearch(nums, target, 0, nums.length-1);
    return answer;
};

var binarySearch = function(array, target, left, right) {
    mid = parseInt((left + right) / 2);
    if (left >= right) {
        if (target > array[mid]) return mid + 1;
        else return mid;
    }
    if (array[mid] === target) return mid;
    if (target > array[mid]) {
        return binarySearch(array, target, mid+1, right);
    } else if (target < array[mid]) {
        return binarySearch(array, target, left, mid-1);
    }
};

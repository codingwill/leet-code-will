/**
 * @param {string} s
 * @return {string}
 */
var longestPalindrome = function(s) {
    var answer = s[0];
    var maxLength = 0;
    
    /** find longest palindromes (odd and even) */
    for (let i = 0; i <= 1; ++i) {
        var curLongestPalindrome = findLongestPalindrome(s, i);
        answer = curLongestPalindrome.length > answer.length ? curLongestPalindrome : answer;
    }
    
    return answer;
};

var findLongestPalindrome = function(s, isEven) {
    var longestSubstring = "";
    var maxLength = 0;
    
    for (let i = isEven ? 0 : 1; i < s.length-1; ++i) {
        var left = isEven ? i : i-1;
        var right = i+1;
        var currentPalindrome = generatePalindrome(s, left, right);
        
        /** comparing the newly generated palindrome substring with the latest optimal palindrome (with max length) */
        if (currentPalindrome.length > maxLength) {
            longestSubstring = currentPalindrome;
            maxLength = currentPalindrome.length;
        }
    }
    
    return longestSubstring;
};

var generatePalindrome = function(s, left, right) {
    /** if character in the left pointer equals with the right pointer */
    if (s[left] !== s[right]) {
        return s.substring(left+1, right);
    }
    
    /** if one of the pointers reaches the edge */
    if (left === 0 || right === s.length-1) {
        return s.substring(left, right+1);
    }
    
    return generatePalindrome(s, left-1, right+1);
}
/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfTwo = function(n) {
    let powerOfTwos = new Set();
    for (let i = 0; i <= 31; ++i) {
        powerOfTwos.add(Math.pow(2, i));
    }
    return powerOfTwos.has(n);
};
/**
 * @param {number[]} candyType
 * @return {number}
 */
var distributeCandies = function(candyType) {
    let types = new Set();
    for (let type of candyType) {
        types.add(type);
    }
    let typesCount = types.size;
    let allowedToEat = candyType.length / 2;
    
    return (typesCount > allowedToEat ? allowedToEat : typesCount);
};
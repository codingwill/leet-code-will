/**
 * @param {string} paragraph
 * @param {string[]} banned
 * @return {string}
 */
var mostCommonWord = function(paragraph, banned) {
    let textArray = paragraph.toLowerCase()
    let symbols = ['!', '?', "'", ',', ';', '.', '"'];
    for (let symbol of symbols) {
        textArray = textArray.replaceAll(symbol, ' ');
    }
    console.log(textArray);
    textArray = textArray.split(' ');
    
    console.log(textArray);
    let bannedWords = new Set();
    let notBannedWords = new Map();
    
    for (let word of banned) {
        bannedWords.add(word);
    }
    
    for (let word of textArray) {
        if (word === '') continue;
        if (!bannedWords.has(word)) {
            if (notBannedWords.has(word)) {
                let count = notBannedWords.get(word) + 1;
                notBannedWords.set(word, count);
            } else {
                notBannedWords.set(word, 1);
            }
        }
    }
    
    // find the most frequent
    let mostFrequent = '';
    let max = -1;
    notBannedWords.forEach((val, key) => {
        if (val > max) {
            mostFrequent = key;
            max = val;
        }
    })
    
    return mostFrequent;
};
/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
	let left = 0
	let right = 0; 
	let map = new Map();

	for(let i = 0; i < s.length ; i++){
		const char = s[i];

		if(map.has(char) && map.get(char) >= left){
			left = map.get(char) + 1;
		}

		map.set(char,i);

		right = Math.max(right, i - left + 1);

	}
	return right;	
};

console.log(lengthOfLongestSubstring("abcabcbb")); 
console.log(lengthOfLongestSubstring("bbbbb"));    
console.log(lengthOfLongestSubstring("pwwkew"));

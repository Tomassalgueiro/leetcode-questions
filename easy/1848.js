/**
 * @param {number[]} nums
 * @param {number} target
 * @param {number} start
 * @return {number}
 */
var getMinDistance = function(nums, target, start) {
    let position = 0, abs = start;
    for ( let i = 0; i < nums.length; i++){
	    if (nums[i] === target && abs > Math.abs(i-start)){
		position = i;	
		abs =  Math.abs(i - start); 
	    }
    }	
    console.log(Math.abs(i - start));
    return abs;
};

/**
 * @param {string} s
 * @param {string} goal
 * @return {boolean}
 */
// s = "cdeab"
// goal = "cdeab"
// on this exercise we have to rotate s to make the same as goal, if possible return true, else return false
var rotateString = function(s, goal) {
    
	if(s.length != goal.length){ return false; }
	if(s == goal){ return true; }
	for(let i = 1; i < s.length; i++){
		let tempStr = s.slice(i) + s.slice(0,i);	

		if(tempStr == goal){
			return true;
		}
	}	
	return false;
};

console.log(rotateString("abcde","cdeab")); // should return true 
console.log(rotateString("abcde","abced")); // should return false 


/**
 * @param {number[]} nums
 * @param {number} target
 * @param {number} start
 * @return {number}
 */
var getMinDistance = function(nums, target, start) {
    
    let minDiff = Infinity 
    
    for( let i = 0 ; i < nums.length ; i++ ){

        if( nums[i] == target && Math.abs( start - i ) < minDiff ){
            minDiff = Math.abs( start - i );
        }
    }

    return minDiff ;
};
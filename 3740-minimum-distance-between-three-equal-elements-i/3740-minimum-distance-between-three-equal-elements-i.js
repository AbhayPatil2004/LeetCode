/**
 * @param {number[]} nums
 * @return {number}
 */
var minimumDistance = function(nums) {
    
    let obj = {} 

    for( let i = 0 ; i < nums.length ; i++ ){

        if( obj[nums[i]] != undefined ){
            obj[nums[i]].push(i) ;
        }
        else{
            obj[nums[i]] = [i] ;
        }
    }

    let result = Infinity 

    for( let key in obj ){

        let arr = obj[key] ;

        if( arr.length > 2 ){
            for( let j = 0 ; j < arr.length - 2 ; j++ ){
                let a = arr[j] , b = arr[j+1] , c = arr[j+2] ;
                result = Math.min( result , ( b - a ) + ( c - b ) + ( c - a ) )
            }
        }
    }

    return result == Infinity ? -1 : result ;
};
/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var subsets = function(nums) {
    

    let result = []
    let temp = []


    function solve( i , nums , result , temp ){

        if( i == nums.length ){
            result.push([...temp]);
            return ;
        }

        temp.push(nums[i]);
        solve( i + 1 , nums , result , temp )
        temp.pop() ;
        solve( i + 1 , nums , result , temp )
    }

    solve( 0 , nums , result , temp );

    return result ;
};
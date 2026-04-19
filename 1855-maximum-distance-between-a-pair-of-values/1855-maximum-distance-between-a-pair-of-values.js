/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var maxDistance = function(nums1, nums2) {
    
    let result = 0

    for( let i = 0 ; i < nums1.length ; i++ ){

        let start = i ;
        let end = nums2.length - 1 ;
        let index = 0 ;

        while( start <= end ){

            let mid = start + Math.floor( ( end - start ) / 2  );

            if( nums2[mid] >= nums1[i] ){
                start = mid + 1 ;
                index = mid ;
            }
            else{
                end = mid - 1 ;
            }
        }

        result = Math.max( result , index - i );
    }

    return result ;
};
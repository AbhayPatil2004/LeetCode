/**
 * @param {number[][]} mat
 * @param {number} k
 * @return {boolean}
 */
var areSimilar = function(mat, k) {
    
    k = k % mat[0].length ;

    for( let i = 0 ; i < mat.length ; i++ ){

        let arr = [ ...mat[i] ]

        if( i % 2 == 1 ){
            for( let j = 0 ; j < mat[0].length ; j++ ){
                arr[ ( j + k ) % mat[0].length ] = mat[i][j] ;
            }
        }
        else{
            let index = 0 ;
            for( let j = k ; j < mat[0].length ; j++ ){
                arr[index] = mat[i][j] ;
                index ++ ;
            }
            for( let j = 0 ; j < k ; j++ ){
                arr[index] = mat[i][j] ;
                index ++ ;
            }
        }

        if (JSON.stringify(arr) !== JSON.stringify(mat[i])) return false;
    }

    return true ;
};
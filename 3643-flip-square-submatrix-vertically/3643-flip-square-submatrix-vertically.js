/**
 * @param {number[][]} grid
 * @param {number} x
 * @param {number} y
 * @param {number} k
 * @return {number[][]}
 */
var reverseSubmatrix = function(grid, x, y, k) {
    
    let rowStart = x ;
    let rowEnd = x + k - 1 ;

    while( rowStart < rowEnd ){

        let colStart = y ;
        let colEnd = y + k - 1 ;

        for( let i = colStart ; i <= colEnd ; i++ ){
            [ grid[rowStart][i] , grid[rowEnd][i] ] = [ grid[rowEnd][i] , grid[rowStart][i] ]
        }

        rowStart ++ ;
        rowEnd -- ;

    }

    return grid ;

};
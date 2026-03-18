/**
 * @param {number[][]} grid
 * @param {number} k
 * @return {number}
 */
var countSubmatrices = function(grid, k) {
    
    for( let i = 0 ; i < grid[0].length ; i++ ){
        for( let j = 1 ; j < grid.length ; j++ ){
            grid[j][i] += grid[j-1][i];
        }
    }

    let result = 0 ;

    for( let i = 0 ; i < grid.length ; i++ ){

        let sum = 0 ;
        let index = 0 ;

        while( index < grid[0].length ){

            sum += grid[i][index] ;
            if( sum > k ) break ;

            result ++ ;
            index ++ ;

        }
    }

    return result ;
};
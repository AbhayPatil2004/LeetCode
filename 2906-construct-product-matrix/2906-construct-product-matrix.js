/**


 * @param {number[][]} grid
 * @return {number[][]}
 */
var constructProductMatrix = function(grid) {
    
    let MOD = 12345 
    let temp = []

    for( let i = 0 ; i < grid.length ; i++ ){
        for( let j = 0 ; j < grid[0].length ; j++ ){
            temp.push( grid[i][j] % MOD )
        }
    }

    let prefix = []
    let suffix = []
    let multi = 1 ;

    for( let i = 0 ; i < temp.length ; i++ ){
        multi = ( multi * temp[i] ) % MOD ;
        prefix.push(multi)
    }

    multi = 1 
    for( let i = temp.length - 1 ; i > -1 ; i-- ){
         multi = ( multi * temp[i] ) % MOD ;
         suffix[i] = multi ;
    }

    let result = []
    let k = 0 

    for( let i = 0 ; i < grid.length ; i++ ){

        let arr = []
        for( let j = 0 ; j < grid[0].length ; j++ ){
            if( k == 0 ){
                arr[j] =  suffix[k+1] % MOD 
            }
            else if( k == temp.length - 1 ){
                arr[j] =  prefix[k-1] % MOD 
            }
            else{
                arr[j] = ( prefix[k-1] * suffix[k+1] ) % MOD 
            }
            k++;
        }

        result.push(arr)
    }

    return result 

};
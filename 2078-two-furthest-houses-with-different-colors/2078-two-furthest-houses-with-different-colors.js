/**
 * @param {number[]} colors
 * @return {number}
 */
var maxDistance = function(colors) {
    
    let result = 0 

    for( let i = 0 ; i < colors.length ; i++ ){

        let index = colors.length - 1 ;

        while( index > i && colors[index] == colors[i] ) index -- ;

        result = Math.max( result , Math.abs( i - index ));
    }

    return result ;
};
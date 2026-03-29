/**
 * @param {string} s
 * @return {number}
 */
var firstMatchingIndex = function(s) {
    
    let start = 0 ;
    let end = s.length - 1 ;

    while( start <= end && s[start] != s[end] ){
        start ++ ;
        end -- ;
    }

    if( start <= end ) return start ;

    return -1 ;
};
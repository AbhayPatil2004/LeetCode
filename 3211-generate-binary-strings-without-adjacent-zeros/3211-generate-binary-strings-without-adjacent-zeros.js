/**
 * @param {number} n
 * @return {string[]}
 */
var validStrings = function(n) {
    
    let result = []

    function solve( n , str , result ){

        if( str.length == n ){
            result.push(str);
            return
        }

        if( str.length == 0 || str[str.length-1] == '1' ){
            solve( n , str + '0' , result );
        }
        solve( n , str + '1' , result );

    }
    
    solve( n , "" , result );

    return result ;
};
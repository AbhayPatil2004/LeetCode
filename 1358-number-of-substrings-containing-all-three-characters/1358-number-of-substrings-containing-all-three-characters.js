/**
 * @param {string} s
 * @return {number}
 */
var numberOfSubstrings = function(s) {
    
    let lasta = -1 , lastb = -1 , lastc = -1 , result = 0 ;

    for( let i = 0 ; i < s.length ; i++ ){

            if( s[i] == 'a' ) lasta = i ;
            else if( s[i] == 'b' ) lastb = i ;
            else{
                lastc = i ;
            }

            if( lasta != -1 && lastb != -1 && lastc != -1 ){
                result += Number(Math.min(  lasta , lastb , lastc ) + 1) ;
            }
        }

    return Number(result) ;
};  
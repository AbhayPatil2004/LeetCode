/**
 * @param {string} s1
 * @param {string} s2
 * @return {boolean}
 */
var checkStrings = function(s1, s2) {
    
    let even = {} 
    let odd = {}

    for( let i = 0 ; i < s1.length ; i++ ){

        if( i % 2 == 0 ){
            even[s1[i]] = ( even[s1[i]] || 0 ) + 1 ;
        }
        else{
            odd[s1[i]] = ( odd[s1[i]] || 0 ) + 1 ;
        }
    }

    for( let i = 0 ; i < s2.length ; i++ ){

        if( i % 2 == 0 ){
            even[s2[i]] = ( even[s2[i]] || 0 ) - 1 ;
        }
        else{
            odd[s2[i]] = ( odd[s2[i]] || 0 ) - 1 ;
        }
    }

    for( let key in even ){
        if( even[key] !== 0 ) return false ;
    }
    for( let key in odd ){
        if( odd[key] !== 0 ) return false ;
    }

    return true ;
};
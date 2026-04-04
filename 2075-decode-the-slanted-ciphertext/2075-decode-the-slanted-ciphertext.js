/**
 * @param {string} encodedText
 * @param {number} rows
 * @return {string}
 */
var decodeCiphertext = function(encodedText, rows) {
    
    if( encodedText.length == "" ) return "" ;

    let n = Number(encodedText.length / rows) ;
    let valid = true ;
    let col = 0 ;
    let result = "" ;

    while( valid && result.length != encodedText.length ){

        let colStart = col ;
        for( let i = 0 ; i < rows ; i++ ){

            let index = ( i * n ) + colStart ;
            if( index < encodedText.length ){
                result += encodedText[index] ;
            }
            else{
                valid = false ;
            }
            colStart ++ ;
        }
        col ++ ;
    }

    while (result.length > 0 && result[result.length - 1] === ' ') {
        result = result.trimEnd();
    }

    return result ;

};
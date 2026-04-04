class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        
        if( encodedText == "" ) return encodedText ;
        string result = "" ;

        int col = 0 ;
        int n = encodedText.size() / rows ;
        bool valid = true ;

        while( valid && result.size() != encodedText.size() ){

            int colStart = col ;
            
            for( int i = 0 ; i < rows ; i++ ){
                int index = ( i * n ) + colStart ;
                if( index < encodedText.size() ){
                    result.push_back( encodedText[index] );
                    colStart ++ ;
                }
                else{
                    valid = false ;
                }
            }
            col ++ ;
        }

        while( result.back() == ' ' ) result.pop_back() ;

        return result ;
    }
};
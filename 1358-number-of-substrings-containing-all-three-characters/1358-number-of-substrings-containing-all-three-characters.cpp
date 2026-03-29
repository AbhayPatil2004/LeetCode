class Solution {
public:
    int numberOfSubstrings(string s) {
        
        int lasta = -1 , lastb = -1 , lastc = -1 ;
        int result = 0 ;

        for( int i = 0 ; i < s.size() ; i++ ){

            if( s[i] == 'a' ) lasta = i ;
            else if( s[i] == 'b' ) lastb = i ;
            else{
                lastc = i ;
            }

            if( lasta != -1 && lastb != -1 && lastc != -1 ){
                result += min( { lasta , lastb , lastc }) + 1 ;
            }
        }

        return result ;

    }
};
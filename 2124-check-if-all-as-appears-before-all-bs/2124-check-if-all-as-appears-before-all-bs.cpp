class Solution {
public:
    bool checkString(string s) {
        
        int aLastIndex = -1 , bFirstIndex = -1 ;

        for( int i = 0 ; i < s.size() ; i++ ){
            if( s[i] == 'b' && bFirstIndex == -1 ) bFirstIndex = i ;
            else if( s[i] == 'a' ) aLastIndex = i ;
        }

        if( aLastIndex == -1 || bFirstIndex == -1 ) return true ;

        return aLastIndex < bFirstIndex ;
    }
};
class Solution {
public:
    string stringHash(string s, int k) {
        
        string result = "" ;

        for( int i = 0 ; i < s.size() ; i += k ){

            int index = i ;
            int sum = 0 ;
            while( index < s.size() && index < i + k ){
                sum += ( s[index] - 'a' );
                index ++ ;
            }

            result += ( 'a' + ( sum % 26 ));
        }

        return result ;
    }
};
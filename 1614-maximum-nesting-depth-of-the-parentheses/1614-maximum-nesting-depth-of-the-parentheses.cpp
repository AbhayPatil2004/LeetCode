class Solution {
public:
    int maxDepth(string s) {
        
        int count = 0 ;
        int result = 0 ;

        for( int i = 0 ; i < s.size() ; i++ ){
            if( s[i] == '(' ) count ++ ;
            else if( s[i] == ')' ){
                result = max( result , count ) ;
                count -- ;
            }
        }

        return result ;
    }
};
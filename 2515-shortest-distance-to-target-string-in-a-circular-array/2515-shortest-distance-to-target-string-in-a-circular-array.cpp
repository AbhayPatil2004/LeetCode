class Solution {
public:
    int closestTarget( vector<string>& words, string target, int startIndex ) {
        
        if( words[startIndex] == target ) return 0 ;

        int result = INT_MAX ;
        int n = words.size() ;

        int right = ( startIndex + 1 ) % n ;
        int left = ( startIndex - 1 + n ) % n ;

        int count = 1 ;

        while( right != startIndex && words[right] != target ){
            right = ( right + 1 ) % n ;
            count ++ ;
        }

        if( right == startIndex ) return -1 ;
        result = min( result , count );

        count = 1 ;

        while( left != startIndex && words[left] != target ){
            left = ( left - 1 + n ) % n ;
            count ++ ;
        }

        result = min( result , count ) ;

        return result ;

    }
};
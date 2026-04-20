class Solution {
public:
    int maxDistance(vector<int>& colors) {
        
        int result = 0 ;

        for( int i = 0 ; i < colors.size() ; i++ ){

            int index = colors.size() - 1 ;
            while( index > i && colors[i] == colors[index] ) index -- ;

            result = max( result , abs( i - index ));
        }

        return result ;
    }
};
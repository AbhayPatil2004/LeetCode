class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        
        int start = x;
        int end = x + k - 1 ;

        while( start < end ){

            for( int i = y ; i < y + k ; i++ ){
                swap( grid[start][i] , grid[end][i] );
            }
            start ++ ;
            end -- ;
        }

        return grid ;

    }
};
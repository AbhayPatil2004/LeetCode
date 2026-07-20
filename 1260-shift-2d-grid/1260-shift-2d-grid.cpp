class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        int rows = grid.size() ;
        int cols = grid[0].size() ;

        // k = k % cols ;

        while( k != 0 ){

            vector<int> temp ( 1 , 0 ) ;
            temp[0] = grid[rows-1][cols-1] ;
            for( int i = 0 ; i < rows - 1 ; i++ ){
                temp.push_back(grid[i][cols-1]);
            }

            for( int j = 0 ; j < cols ; j++ ){
                for( int i = 0 ; i < rows ; i++ ){
                    int tempVal = temp[i] ;
                    temp[i] = grid[i][j] ;
                    grid[i][j] = tempVal ;  
                }
            }

            k-- ;
        }

        return grid ;
    }
};
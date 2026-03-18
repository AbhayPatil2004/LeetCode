class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        
        for( int i = 0 ; i < grid[0].size() ; i++ ){
            for( int j = 1 ; j < grid.size() ; j++ ){
                grid[j][i] += grid[j-1][i] ;
            }
        }

        int result = 0 ;

        for( int i = 0 ; i < grid.size() ; i++ ){

            int sum = 0 ;
            int index = 0 ;

            while( index < grid[0].size() ){

                sum += grid[i][index] ;
                if( sum > k ) break ;
                result ++ ;
                index ++ ;
            }
        }

        return result ;
    }
};
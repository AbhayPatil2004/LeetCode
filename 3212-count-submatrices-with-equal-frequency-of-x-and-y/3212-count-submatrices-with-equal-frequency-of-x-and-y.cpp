class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        
        vector<vector<pair<int,int>>> count ( grid.size() , vector<pair<int,int>> ( grid[0].size() , { 0 , 0 } ));

        for( int i = 0 ; i < grid[0].size() ; i++ ){
            int x = 0 , y = 0 ;

            for( int j = 0 ; j < grid.size() ; j++ ){

                if( grid[j][i] == 'X' ) x++ ;
                else if( grid[j][i] == 'Y' ) y++ ;

                count[j][i] = { x , y };
            }

        }

        int result = 0 ;

        for( int i = 0 ; i < count.size() ; i++ ){

            int x = 0 , y = 0 ;

            for( int j = 0 ; j < count[0].size() ; j++ ){

                x += count[i][j].first ;
                y += count[i][j].second ;

                if( x == y && x > 0 ) result ++ ; 
            }

        }

        return result ;
    }
};
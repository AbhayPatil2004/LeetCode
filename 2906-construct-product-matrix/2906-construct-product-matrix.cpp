class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        
        vector<int> temp ;

        for( int i = 0 ; i < grid.size() ; i++ ){
            for( int j = 0 ; j < grid[0].size() ; j++ ){
                temp.push_back(grid[i][j]%12345) ;
            }
        }

        vector<int> prefix( temp.size() , 1 );
        vector<int> suffix( temp.size() , 1 );

        int multi = 1 ;
        for( int i = 0 ; i < temp.size() ; i++ ){
            multi = (multi * temp[i]) % 12345;
            prefix[i] = multi ;
        }

        multi = 1 ;
        for( int i = temp.size() - 1 ; i > -1 ; i-- ){
            multi = (multi * temp[i]) % 12345;
            suffix[i] = multi ;
        }

        vector<vector<int>> result( grid.size() , vector<int> ( grid[0].size() , 1 ));
        int k = 0 ;

        for( int i = 0 ; i < grid.size() ; i++ ){
            for( int j = 0 ; j < grid[0].size() ; j++ ){
                if( k == 0 ){
                    result[i][j] = suffix[k+1] % 12345 ;
                }
                else if( k == temp.size() - 1 ){
                    result[i][j] = prefix[k-1] % 12345 ;
                }
                else{
                    result[i][j] = ( prefix[k-1] * suffix[k+1] ) % 12345 ;
                }
                k++;
            }
        }

        return result ;
    }
};
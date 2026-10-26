class Solution {
public:
    void solve( int i , int j , int n , int m , long long int &sum , vector<vector<int>>& grid , vector<vector<int>>& visited ){

        if( i < 0 || j < 0 || i >= n || j >= m || visited[i][j] || grid[i][j] == 0 ) return ;

        sum += grid[i][j] ;

        visited[i][j] = true ;

        solve( i + 1 , j , n , m , sum , grid , visited );
        solve( i , j + 1 , n , m , sum , grid , visited );
        solve( i - 1 , j , n , m , sum , grid , visited );
        solve( i , j - 1 , n , m , sum , grid , visited );

    }
    int countIslands(vector<vector<int>>& grid, int k) {
         
        int result = 0 ;

        int n = grid.size() , m = grid[0].size() ;
        vector<vector<int>> visited ( n , vector<int> ( m , false ));

        for( int i = 0 ; i < n ; i++ ){
            for( int j = 0 ; j < m ; j++ ){
                if( grid[i][j] == 0 || visited[i][j] ) continue ;

                long long int sum = 0 ;

                solve( i , j , n , m , sum , grid , visited );
                cout << sum << " " ;
                // cout << endl ;

                if( sum % k == 0 ) result ++ ;
            }
        }

        return result ;
        
    }

};
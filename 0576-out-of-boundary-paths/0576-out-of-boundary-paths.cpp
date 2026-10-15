class Solution {
public:
    int MOD = 1e9 + 7 ;
    int solve( int i , int j , int rows , int cols , int maxMove , vector<vector<vector<int>>> &dp){

        if( i < 0 || i >= rows || j < 0 || j >= cols ){
            return 1 ;
        }

        if( maxMove == 0 ) return 0 ;

        if( dp[i][j][maxMove] != -1 ) return dp[i][j][maxMove] ;

        long long int up = solve( i - 1 , j , rows , cols , maxMove - 1 , dp );
        long long int right = solve( i , j + 1 , rows , cols , maxMove - 1 , dp );
        long long int down = solve( i + 1 , j , rows , cols , maxMove - 1 , dp );
        long long int left = solve( i , j - 1 , rows , cols , maxMove - 1 , dp );

        return dp[i][j][maxMove] = ( up + right + down + left ) % MOD ;

    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        
        if( maxMove == 0 ) return 0 ;
        vector<vector<vector<int>>> dp ( m + 1 , vector<vector<int>> ( n + 1 , vector<int> ( maxMove + 1 , -1 )));
        return solve( startRow , startColumn , m , n , maxMove , dp );
        
    }
};
class Solution {
public:
    bool solve( int i , int j , int n , int m , string temp , vector<vector<char>>& board, string word ,vector<vector<bool>> &visited ){

        if( temp == word ) return true ;
        int lastIndex = temp.size() - 1 ;

        if( lastIndex > -1 && temp[lastIndex] != word[lastIndex] ) return false ;
        if( i < 0 || j < 0 || i >= n || j >= m ) return false ;

        if( visited[i][j] ) return false ;

        temp += board[i][j] ;
        visited[i][j] = true ;

        bool right = solve( i + 1 , j , n , m , temp , board , word , visited );
        bool down = solve( i , j + 1 , n , m , temp , board , word , visited );
        bool left = solve( i - 1 , j , n , m , temp , board , word , visited );
        bool up = solve( i , j - 1, n , m , temp , board , word , visited );

        temp.pop_back() ;
        visited[i][j] = false ;

        return right || down || left || up ;
    }
    bool exist(vector<vector<char>>& board, string word) {
        
        int n = board.size() ;
        int m = board[0].size() ;
        string temp = "" ;

        vector<vector<bool>> visited( n , vector<bool> ( m , false ));

        for( int i = 0 ; i < n ; i++ ){
            for( int j = 0 ; j < m ; j++ ){

                if( solve( i , j , n , m , temp , board , word , visited ) ) return true ;
            }
        }

        return false ;
    }
};
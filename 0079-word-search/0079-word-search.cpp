class Solution {
public:
    void solve( int index , int i , int j , int n , int m , vector<vector<char>>& board , string word , bool &result ){

        if( index == word.size() ){
            result = true ;
            return ;
        }

        if (i < 0 || j < 0 || i >= n || j >= m || board[i][j] != word[index] || result || board[i][j] == '#' )
            return;
        
        if( !result ){
            char temp = board[i][j];  
            board[i][j] = '#';        

            
            solve(index + 1, i - 1, j, n, m, board, word, result); 
            solve(index + 1, i, j + 1, n, m, board, word, result); 
            solve(index + 1, i + 1, j, n, m, board, word, result); 
            solve(index + 1, i, j - 1, n, m, board, word, result);

            board[i][j] = temp;
        } 
    }
    bool exist(vector<vector<char>>& board, string word) {
        
        int n = board.size();
        int m = board[0].size();

        for( int i = 0 ; i < n ; i++ ){
            for( int j = 0 ; j < m ; j ++ ){
                bool result = false ;
                if( board[i][j] == word[0] ){
                    solve( 0 , i , j , n , m , board , word , result );
                }

                if( result ) return true ;
            }
        }

        return false ;
    }
};
class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        
        k = k % mat[0].size() ;

        for( int i = 0 ; i < mat.size() ; i++ ){
            
            vector<int> row = mat[i] ;

            if( i % 2 == 1 ){
                for( int j = 0 ; j < mat[0].size() ; j++ ){
                    row[ ( j + k ) % mat[0].size() ] = mat[i][j] ;
                }
            }
            else{
                
                int index = 0 ;
                for( int j = k ; j < mat[0].size() ; j++ ){
                    row[index] = mat[i][j] ;
                    index ++ ;
                }
                for( int j = 0 ; j < k ; j++ ){
                    row[index] = mat[i][j] ;
                    index ++ ;
                }

            }

            if( row != mat[i] ) return false ;
        }

        return true ;
    }
};
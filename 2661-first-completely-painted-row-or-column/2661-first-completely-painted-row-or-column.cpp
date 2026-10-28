class Solution {
public:
    
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        
        int n = mat.size() , m = mat[0].size() ;

        map<int,pair<int,int>> index ;

        for( int i = 0 ; i < n ; i++ ){

            for( int j = 0 ; j < m ; j++ ){
                index[mat[i][j]] = { i , j };
            }
        }

        vector<int> rowCount(n, 0);
        vector<int> colCount(m, 0);

        // vector<vector<bool>> painted( n , vector<bool> ( m , false ));

        for( int i = 0 ; i < arr.size() ; i++ ){

            pair<int,int> p = index[arr[i]] ;
            int iIndex = p.first ;
            int jIndex = p.second ;

            rowCount[iIndex]++;
            colCount[jIndex]++;

            if (rowCount[iIndex] == m || colCount[jIndex] == n) {
                return i;
            }

        }

        return arr.size() ;
    }
};
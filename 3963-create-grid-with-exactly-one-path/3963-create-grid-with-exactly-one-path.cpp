class Solution {
public:
    vector<string> createGrid(int m, int n) {
        
        vector<string> result ;

        string temp = "" ;

        for( int i = 0 ; i < n ; i++ ) temp += '.' ;

        result.push_back(temp) ;

        for( int i = 1 ; i < m ; i++ ){

            temp = "" ; 
            for( int j = 1 ; j < n ; j++ ){
                temp += "#" ;
            }

            temp += '.' ;
            cout << temp ;

            result.push_back(temp) ; 
        }

        return result ;
    }
};
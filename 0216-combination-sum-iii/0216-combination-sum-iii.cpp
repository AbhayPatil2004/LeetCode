class Solution {
public:
    void solve( int i , int sum , int k , int n , vector<int> temp , vector<vector<int>> &result ){

        if( sum == n && temp.size() == k ){
            result.push_back(temp);
            return ;
        }

        if( temp.size() > n || sum > n ) return ;

        for( int j = i ; j < 10 ; j++ ){

            temp.push_back(j) ;

            solve( j + 1, sum + j , k , n , temp , result );
            temp.pop_back();
        }

    }
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<vector<int>> result ;
        vector<int> temp ;

        solve( 1 , 0 , k , n , temp , result );

        return result ;
    }
};
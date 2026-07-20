class Solution {
public:
    void solve( int i , int sum , int target , vector<int>& candidates , vector<int> temp , vector<vector<int>> &result ){

        if( sum == target ){
            result.push_back(temp);
            return ;
        }
        if( i >= candidates.size() || sum > target ) return ;

        for( int j = i ; j < candidates.size() ; j++ ){
            
            temp.push_back(candidates[j]);
            solve( j , sum + candidates[j] , target , candidates , temp , result );
            temp.pop_back() ;
            // solve( j , sum , target , candidates , temp , result );
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<int> temp ;
        vector<vector<int>> result ;

        solve( 0 , 0 , target , candidates , temp , result );

        return result ;
    }
};
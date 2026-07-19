class Solution {
public:
    void solve( int i , vector<int>& nums , vector<vector<int>> &result , vector<int> temp ){

        if( i == nums.size() ){
            result.push_back(temp);
            return ;
        }

        temp.push_back(nums[i]);
        solve( i + 1 , nums , result , temp );
        temp.pop_back() ;
        solve( i + 1 , nums , result , temp );
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> result ;
        vector<int> temp ;

        solve( 0 , nums , result , temp );

        return result ;
    }
};
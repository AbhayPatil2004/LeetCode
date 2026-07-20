class Solution {
public:
    void solve( int i , int k , int n , vector<vector<int>> &result , vector<int> temp , vector<int> &nums ){

        if( n == 0 && temp.size() == k ){
            result.push_back(temp) ;
            return ;
        }

        if( i == nums.size() || k < 0 ) return ;

        temp.push_back(nums[i]);
        solve( i + 1 , k , n - nums[i] , result , temp , nums );
        temp.pop_back() ;
        solve( i + 1 , k , n , result , temp , nums );

    }
    vector<vector<int>> combinationSum3(int k, int n) {

        vector<vector<int>> result ;
        vector<int> temp ;
        vector<int> nums { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 };
        solve( 0 , k , n , result , temp , nums );

        return result ;
    }
};
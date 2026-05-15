class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int minValue = INT_MAX ;
        for( int i = 0 ; i < nums.size() ; i++ ){
            minValue = min( minValue , nums[i] );
        }

        return minValue ;
    }
};
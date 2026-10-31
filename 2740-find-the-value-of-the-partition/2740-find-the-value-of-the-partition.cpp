class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        
        sort( nums.begin() , nums.end() );

        int result = INT_MAX ;

        for( int i = 1 ; i < nums.size() ; i++ ){
            result = min( result , nums[i] - nums[i-1] );
        }

        return result ;
    }
};
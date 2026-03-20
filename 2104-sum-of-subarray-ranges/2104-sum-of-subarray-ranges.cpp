class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        
        long long result = 0 ;

        for( int i = 0 ; i < nums.size() ; i++ ){

            int minValue = INT_MAX ;
            int maxValue = INT_MIN ;

            for( int j = i ; j < nums.size() ; j++ ){

                minValue = min( minValue , nums[j] );
                maxValue = max( maxValue , nums[j] );

                result += maxValue - minValue ;
            }
        }

        return result ;
    }
};
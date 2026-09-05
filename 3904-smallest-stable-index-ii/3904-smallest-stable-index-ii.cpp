class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
        int n = nums.size() ;
       
        vector<int> minNumbers ( n , -1 ) ;
        int maxValue = INT_MIN , minValue = INT_MAX ;

        for( int i = 0 ; i < n ; i++ ){
        
            minValue = min( minValue , nums[n-i-1] );
            minNumbers[n-i-1] = minValue ;
        }

        for( int i = 0 ; i < n ; i++ ){
            maxValue = max( maxValue , nums[i] );
            if( maxValue - minNumbers[i] <= k ) return i ;
        }

        return -1 ;

    }
};
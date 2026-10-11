class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        
        int result = 0 ;

        for( int i = 0 ; i < nums.size() ; i++ ){
            if( nums.size() % ( i + 1 ) == 0 ){
                result += ( nums[i] * nums[i] );
            }
        }

        return result ;
    }
};
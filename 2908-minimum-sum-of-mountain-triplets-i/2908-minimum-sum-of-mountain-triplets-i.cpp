class Solution {
public:
    int minimumSum(vector<int>& nums) {
        
        int result = INT_MAX ;

        for( int i = 0 ; i < nums.size() ; i++ ){

            for( int j = i + 1 ; j < nums.size() ; j++ ){

                if( nums[i] < nums[j] ){
                    for( int k = j + 1 ; k < nums.size() ; k++ ){
                        if( nums[k] < nums[j] ) result = min( result , nums[i] + nums[j] + nums[k] );
                        cout << nums[i] << " " << nums[j] << " " << nums[k] << endl ;
                    }
                }
            }
        }

        return result == INT_MAX ? -1 : result ;
    }
};
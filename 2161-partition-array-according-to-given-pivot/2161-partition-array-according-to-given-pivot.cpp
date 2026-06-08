class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        vector<int> result ;

        int start = 0 ;
        for( int i = 0 ; i < nums.size() ; i++ ){
            if( nums[i] < pivot ) result.push_back(nums[i]) ;
            start ++ ;
        }
        for( int i = 0 ; i < nums.size() ; i++ ){
            if( nums[i] == pivot ) result.push_back(nums[i]) ;
            start ++ ;
        }
        for( int i = 0 ; i < nums.size() ; i++ ){
            if( nums[i] > pivot ) result.push_back(nums[i]) ;
            start ++ ;
        }

        return result ;
    }
};
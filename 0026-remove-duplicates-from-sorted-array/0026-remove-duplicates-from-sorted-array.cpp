class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int index = 1 ;
        int start = nums[0] ;
       

        for( int i = 1 ; i < nums.size() ; i++ ){
            if( nums[i] != start ){
                nums[index] = nums[i] ;
                start = nums[i] ;
                index ++ ;
            }
        }

        return index ;

    }
};
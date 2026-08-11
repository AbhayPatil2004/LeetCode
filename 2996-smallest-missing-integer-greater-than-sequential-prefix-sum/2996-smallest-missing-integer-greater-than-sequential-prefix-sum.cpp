class Solution {
public:
    int missingInteger(vector<int>& nums) {
        
        unordered_set<int> SET ;

        for( int i = 0 ; i < nums.size() ; i++ ){
            SET.insert(nums[i]);
        }

        int sum = nums[0] ;
        int i = 1 ;

        while( i < nums.size() && nums[i] - nums[i-1] == 1 ){
            sum += nums[i] ;
            i++ ;
        }

        while( true ){
            if( !SET.count(sum) ) return sum ;
            sum ++ ;
        }

        return -1 ;

    }
};
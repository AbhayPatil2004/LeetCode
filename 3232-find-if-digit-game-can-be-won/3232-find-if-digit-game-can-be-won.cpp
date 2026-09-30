class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        
        int totalSum = 0 ;
        int singleDigitSum = 0 ;
        int doubleDigitSum = 0 ;

        for( int i = 0 ; i < nums.size() ; i++ ){

            totalSum += nums[i] ;
            if( nums[i] > 0 && nums[i] < 10 ) singleDigitSum += nums[i] ;  
            if( nums[i] > 9 && nums[i] < 100 ) doubleDigitSum += nums[i] ;
        }

        if( singleDigitSum > totalSum - singleDigitSum || doubleDigitSum > totalSum - doubleDigitSum ) return true ;

        return false ;

    }
};
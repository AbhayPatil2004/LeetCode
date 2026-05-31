class Solution {
public:
    int digitFrequencyScore(int n) {
        
        vector<int> nums( 10 , 0 );

        while( n != 0 ){
            nums[n%10] ++ ;
            n /= 10 ;
        }

        int result = 0 ;

        for( int i = 0 ; i < 10 ; i++ ){
            result += i * nums[i] ;
        }

        return result ;
    }
};
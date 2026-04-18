class Solution {
public:
    int mirrorDistance(int n) {
        
        long long int temp = n ;
        long long int rev = 0 ;

        while( temp != 0 ){
            rev +=  temp % 10  ;
            rev *= 10 ;
            temp /= 10 ;
        }

        return abs( n - rev / 10);
    }
};
class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        
        if( n == 1 ) return 1 ; 
        int sumOdd = 0 ;
        int sumEven = 0 ;

        for( int i = 1 ; i <= n * 2 ; i++ ){
            if( i % 2 == 0 ) sumEven += i ;
            else{
                sumOdd += i ;
            }
        }

        int i = sumOdd ;
        while( i != 0 ){
            if( sumOdd % i == 0 && sumEven % i == 0 ){
                return i ;
            }
            i -- ;
        }

        return 0 ;

    }
};
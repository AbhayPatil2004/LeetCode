class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        
        vector<int> count( 10 , 0 );
        for( int i = 0 ; i < digits.size() ; i++ ){
            count[digits[i]]++ ;
        }  

        int result = 0 ;
        for( int i = 100 ; i < 1000 ; i+= 2 ){
            
            
            int temp = i ;
            int firstDigit = temp % 10 ;
            temp /= 10 ;
            int SecondDigit = temp % 10 ;
            temp /= 10 ;
            int thirdDigit = temp ;

            vector<int> tempArr = count ;
            
            bool flag = true ;
            if( tempArr[firstDigit] > 0 ) tempArr[firstDigit] -- ;
            else{
                flag = false ;
            }
            if( tempArr[SecondDigit] > 0 ) tempArr[SecondDigit] -- ;
            else{
                flag = false ;
            }
            if( tempArr[thirdDigit] > 0 ) tempArr[thirdDigit] -- ;
            else{
                flag = false ;
            }

            
            if( flag ) result ++ ;
            

        }

        return result ;
    }
};
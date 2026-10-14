class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        
        unordered_map<int,int> MAP ;
        for( int i = 0 ; i < digits.size() ; i++ ){
            MAP[digits[i]]++ ;
        }
        
        vector<int> result ;

        for( int i = 100 ; i < 1000 ; i+= 2 ){

            int temp = i ;

            int firstDigit = temp % 10 ;
            int firstDigitCount = 0 ;
            if( !MAP.count(firstDigit) ) continue ;
            else{
                firstDigitCount = MAP[firstDigit] ;
                temp /= 10 ;
            }   

            int secDigit = temp % 10 ;
            int secDigitCount = 0 ;
            if( !MAP.count(secDigit) ) continue ;
            else{
                secDigitCount = MAP[secDigit] ;
                temp /= 10 ;
            }    

            int thirdDigit = temp % 10 ;
            int thirdDigitCount = 0 ;
            if( !MAP.count(thirdDigit) ) continue ;
            else{
                thirdDigitCount = MAP[thirdDigit] ;
                temp /= 10 ;
            }   

            if( firstDigit == secDigit && firstDigit == thirdDigit && firstDigitCount < 3 ) continue ;
            if( firstDigit == secDigit && firstDigitCount < 2 ) continue ; 
            if( firstDigit == thirdDigit && firstDigitCount < 2 ) continue ; 
            if( secDigit == thirdDigit && secDigitCount < 2 ) continue ; 

            result.push_back(i) ;
            
        }

        return result ;
    }
};
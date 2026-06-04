class Solution {
public:
    int totalWaviness(int num1, int num2) {
        
        int result = 0 ;

        for( int i = num1 ; i <= num2 ; i++ ){

            string str = to_string(i) ;
            for( int j = 1 ; j < str.size() - 1 ; j++ ){
                if( ( str[j] > str[j-1] && str[j] > str[j+1] ) || str[j] < str[j-1] && str[j] < str[j+1] ){
                    result ++ ;
                }
            }
        }

        return result ;
    }
};
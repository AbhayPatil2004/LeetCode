class Solution {
public:
    int rotatedDigits(int n) {
        
        int result = 0 ;

        for( int i = 1 ; i <= n ; i++ ){

            string str = to_string(i) ;
            
            string temp = "" ;
            
            for( int j = 0 ; j < str.size() ; j++ ){
                if( str[j] == '3' || str[j] == '4' || str[j] == '7' ) break ;
                else if( str[j] == '2' ) temp += '5';
                else if( str[j] == '5' ) temp += '2';
                else if( str[j] == '6' ) temp += '9';
                else if( str[j] == '9' ) temp += '6';
                else{
                    temp += str[j] ;
                }
            }
            
            if( temp != str && temp.size() == str.size() ) result ++ ;
            
        }

        return result ;
    }
};
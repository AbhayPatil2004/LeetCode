class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        
        string result  ;

        for( int i = 0 ; i < s.size() ; i++ ){

            string temp = "" ;
            int ones = 0 ;

            for( int j = i ; j < s.size() ; j++ ){
                if( s[j] == '1' ) ones++ ;
                temp += s[j] ;
                if( ones == k ) break ;
            }

            cout << temp << " ";
            if( ones == k && ( result.empty() || temp.size() < result.size() || ( temp.size() == result.size() && temp < result ))){
                result = temp ;
            }
            
            
        }

        return result ;
    }
};
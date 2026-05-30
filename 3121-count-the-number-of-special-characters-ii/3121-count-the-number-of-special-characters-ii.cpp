class Solution {
public:
    int numberOfSpecialChars(string word) {
        
        vector<pair<int,int>> chars ( 26 , { -1 , -1 });

        for( int i = 0 ; i < word.size() ; i++ ){

            if( word[i] >= 'A' && word[i] <= 'Z' ){
                int index = word[i] - 'A' ;
                if( chars[index].second == -1 ){
                    chars[index].second = i ;
                }
            }
            else{
                int index = word[i] - 'a' ;
                chars[index].first = i ;
            }
        }


        int result = 0 ;
        
        for( int i = 0 ; i < 26 ; i++ ){
            if( chars[i].first != -1 && chars[i].second != -1 && chars[i].first < chars[i].second ){
                result ++ ;
            }
        }

        return result ;
    }
};
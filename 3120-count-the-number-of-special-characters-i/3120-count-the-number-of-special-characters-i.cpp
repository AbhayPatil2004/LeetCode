class Solution {
public:
    int numberOfSpecialChars(string word) {
        
        int result = 0 ;
        vector<pair<bool,bool>> temp ( 26 , { false , false } );

        for( int i = 0 ; i < word.size() ; i++ ){
            int index = -1 ;
            if( word[i] >= 'A' && word[i] <= 'Z' ){
                index = word[i] - 'A' ;
                temp[index].first = true ;
            }
            else{
                index = word[i] - 'a' ;
                temp[index].second = true ;
            }

            
        }

        for( int i = 0 ; i < 26 ; i++ ){
            if( temp[i].first && temp[i].second ) result ++ ;
        }

        return result ;
    }
};
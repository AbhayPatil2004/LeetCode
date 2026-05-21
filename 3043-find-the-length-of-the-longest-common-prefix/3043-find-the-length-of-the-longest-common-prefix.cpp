class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        
        unordered_set<string> s ;
        int result = 0 ;

        for( int i = 0 ; i < arr1.size() ; i++ ){

            string str = to_string(arr1[i]);
            string temp = "" ;

            for( int j = 0 ; j < str.size() ; j++ ){
                temp += str[j] ;
                s.insert(temp) ;
            }
        }

        for( int i = 0 ; i < arr2.size() ; i++ ){

            string str = to_string(arr2[i]);
            string temp = "" ;

            for( int j = 0 ; j < str.size() ; j++ ){

                temp += str[j] ;
                if( s.count(temp) && temp.size() > result ){
                    result = temp.size();
                }
            }
        }

        return result ;
    }
};
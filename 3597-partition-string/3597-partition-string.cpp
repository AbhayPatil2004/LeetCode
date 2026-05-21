class Solution {
public:
    vector<string> partitionString(string s) {
        
        unordered_set<string> set ;
        vector<string> result ;

        string temp = "" ;
        for( int i = 0 ; i < s.size() ; i++ ){

            temp += s[i] ;
            if( !set.count(temp) ){
                result.push_back(temp);
                set.insert(temp);
                temp = "" ;
            }
        }

        return result ;
    }
};
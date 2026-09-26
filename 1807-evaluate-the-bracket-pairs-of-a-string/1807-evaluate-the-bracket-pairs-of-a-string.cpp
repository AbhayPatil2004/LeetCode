class Solution {
public:
    string value( string temp , unordered_map<string,string> &MAP  ){

       if( MAP.find(temp) != MAP.end() ){
            return MAP[temp] ;
       }

        return "?" ;
    }

    string evaluate(string s, vector<vector<string>>& knowledge) {
        
        unordered_map<string,string> MAP ;
        for( int i = 0 ; i < knowledge.size() ; i++ ){
           MAP[knowledge[i][0]] = knowledge[i][1] ;
        }

        string result = "" ;

        for( int i = 0 ; i < s.size() ; i++ ){

            string add = "";
            add += s[i] ;

            if( s[i] == '(' ){
                i++ ;
                string temp = "" ;
                while( i < s.size() && s[i] != ')' ){
                    temp += s[i] ;
                    i++ ;
                }

                add = value( temp , MAP );

            }

            result += add ;
        
        }

        return result ;
    }
};
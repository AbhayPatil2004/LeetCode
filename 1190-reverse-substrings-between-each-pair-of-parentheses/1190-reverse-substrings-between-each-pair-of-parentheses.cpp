class Solution {
public:
    string reverseParentheses(string s) {
        
        stack<char> ch ;

        for( int i = 0 ; i < s.size() ; i++ ){

            if( s[i] == ')' ){
                string temp = "" ;

                while( !ch.empty() && ch.top() != '(' ){
                    temp += ch.top() ;
                    ch.pop() ;
                }

                if( !ch.empty() ) ch.pop() ;

                cout << temp << endl;
                for( int i = 0 ; i < temp.size() ; i++ ) ch.push(temp[i]);
            }
            else{
                ch.push(s[i]);
            }
        }

        string result = "" ;

        while( !ch.empty() ){
            result += ch.top() ;
            ch.pop() ;
        }

        reverse( result.begin() , result.end() );
        return result ;
    }
};
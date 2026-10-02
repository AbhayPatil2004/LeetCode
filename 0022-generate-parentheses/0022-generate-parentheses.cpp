class Solution {
public:
    bool valid( string temp ){

        stack<char> st ;

        for( int i = 0 ; i < temp.size() ; i++ ){

            if( temp[i] == ')' && st.empty() ) return false ;
            else if( temp[i] == '(' ) st.push('(');
            else{
                st.pop() ;
            }
        }

        return st.empty() ;
    }
    void solve( int n , string temp , vector<string> &result){

        if( temp.size() == 2 * n ){
            if( valid(temp) ) result.push_back(temp);
            return ;
        }

        solve( n , temp + '(' , result );
        solve( n , temp + ')' , result );
    }
    vector<string> generateParenthesis(int n) {
        
        vector<string> result ;

        solve( n , "" , result );

        return result ;
    }
};
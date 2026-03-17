class Solution {
public:
    void solve( int n , string str , vector<string> &result ){

        if( n == str.size() ){
            result.push_back(str);
            return ;
        }

        if( str.size() == 0 || str.back() == '1' ){
            solve( n , str + '0' , result );
        }

        solve( n , str + '1' , result );
        
    }
    vector<string> validStrings(int n) {
        
        vector<string> result ;
        solve( n , "" , result );

        return result ;
    }
};
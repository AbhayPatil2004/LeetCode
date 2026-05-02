class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        
        if( password.size() < 8 ) return false ;
        
        bool lower = false , upper = false , digit = false , special = false ;

        for( int i = 0 ; i < password.size() ; i++ ){

            char ch = password[i] ;
            if( i < password.size() - 1 && password[i] == password[i+1] ) return false ;
            else if( ch >= 'a' && ch <= 'z' ) lower = true ;
            else if( ch >= 'A' && ch <= 'Z' ) upper = true ;
            else if( ch >= '0' && ch <= '9' ) digit = true ;
            else if( ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '^' || ch == '&' || ch == '*' || ch == '(' || ch == ')' || ch == '-' || ch == '+' ) special = true ;
            
        }

        return lower && upper && digit && special ;
    }
};
class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        
        sort( nums1.begin() , nums1.end() ) ;

        vector<int> odd( nums1.size() , 0 ) ;
        int oddCount = 0 ;

        for( int i = 0 ; i < nums1.size() ; i++ ){
            if( nums1[i] % 2 == 1 ) oddCount ++ ;
            odd[i] = oddCount ;
        }

        bool valid = true ;

        for( int i = nums1.size() - 1 ; i > -1 ; i-- ){

            if( nums1[i] % 2 == 1 ){
                if( i == 0 || odd[i-1] == 0 ){
                    valid = false ;
                    break ;
                }   
            }

        }

        if( valid ) return true ;

        for( int i = nums1.size() - 1 ; i > -1 ; i-- ){

            if( nums1[i] % 2 == 0 ){
                if( i == 0 || odd[i-1] == 0 ) return false ;
                     
            }

        }

        return true ;

    }
};
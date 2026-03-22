class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        
        bool valid = true ;

        for( int i = 0 ; i < nums1.size() ; i++ ){

            if( nums1[i] % 2 != 0 ){

                bool found = false ;

                for( int j = 0 ; j < nums1.size() ; j++ ){
                    if( i != j && abs( nums1[j] - nums1[i] ) % 2 == 0 ){
                        found = true ;
                        break ;
                    }

                }
                if( !found ) valid = false ;
                
            }

            if( !valid ) break ;
        }

        if( valid ) return true ;

        valid = true ;

        for( int i = 0 ; i < nums1.size() ; i++ ){

            if( nums1[i] % 2 != 1 ){

                bool found = false ;

                for( int j = 0 ; j < nums1.size() ; j++ ){
                    if( i != j &&  abs( nums1[j] - nums1[i] ) % 2 == 1 ){
                        found = true ;
                        break ;
                    }

                }
                if( !found ) valid = false ;
                
            }

            if( !valid ) return false ;
        }

        return true ;
    }
};
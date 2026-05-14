class Solution {
public:
    bool isGood(vector<int>& nums) {
        
        if( nums.size() == 1 ) return false ;
        
        int n = nums.size() ;
        vector<int> temp( n + 1 , 0 ); 

        for( int i = 0 ; i < n ; i++ ){
            int index = nums[i] ;
            if( index > n ) return false ;
            temp[index] ++ ;
        }

        if( temp[n-1] != 2 ) return false ;

        for( int i = 1 ; i < n - 1 ; i++ ){
            if( temp[i] != 1 ) return false ;
        }

        return true ;
    }
};
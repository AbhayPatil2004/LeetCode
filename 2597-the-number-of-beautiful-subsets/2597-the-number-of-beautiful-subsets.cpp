class Solution {
public:
    bool valid( vector<int>&temp , int k ){

        for( int i = 0 ; i < temp.size() ; i++ ){
            for( int j = 0 ; j < temp.size() ; j++ ){
                if( abs( temp[i] - temp[j] ) == k && i != j ) return false ;
            }
        }

        return true ;
    }
    int solve( int i , int k , vector<int>& nums , vector<int>&temp ){

        if( i == nums.size() ){
            if( valid( temp , k )) return 1 ;
            return 0 ;
        }

        
        temp.push_back(nums[i]);
        int include = solve( i + 1 , k , nums , temp );
        temp.pop_back() ;
        int exclude = solve( i + 1 , k , nums , temp );

        return include + exclude ;
    }
    int beautifulSubsets(vector<int>& nums, int k) {
        
        vector<int> temp ;

        return solve( 0 , k , nums , temp ) - 1;
        
    }
};
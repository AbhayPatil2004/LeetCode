class Solution {
public:
    int minMoves2(vector<int>& nums) {
        
        sort( nums.begin() , nums.end() );

        int median = nums[nums.size()/2] ;

        int diff = INT_MAX ;
        
        for( int i = 0 ; i < nums.size() ; i++ ){
            if( abs( nums[i] - median ) < diff ){
                diff = abs( nums[i] - median ) ;
            }
        } 
        
        cout << diff ;
        median -= diff ;
        
        int result = 0 ;

        for( int i = 0 ; i < nums.size() ; i++ ){
            result += abs( nums[i] - median ) ;
        } 

        return result ;
    }
};
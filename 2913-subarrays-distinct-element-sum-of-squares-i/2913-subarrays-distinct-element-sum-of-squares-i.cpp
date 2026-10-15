class Solution {
public:
    int sumCounts(vector<int>& nums) {
        
        int result = 0 ;

        for( int i = 0 ; i < nums.size() ; i++ ){

            unordered_set<int> SET ;
            for( int j = i ; j < nums.size() ; j++ ){

                SET.insert( nums[j] );

                result += ( SET.size() * SET.size() );
            }
        }

        return result ;
    }
};
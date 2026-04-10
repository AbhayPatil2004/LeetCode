class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        
        unordered_map<int,vector<int>> MAP ;

        for( int i = 0 ; i < nums.size() ; i++ ){
            MAP[nums[i]].push_back(i) ;
        }

        int result = INT_MAX ;

        for( auto i : MAP ){

            vector<int> temp = i.second ;
            
            if( temp.size() > 2 ){
                for( int j = 0 ; j < temp.size() - 2 ; j++ ){
                    int a = temp[j] , b = temp[j+1] , c = temp[j+2] ;
                    result = min( result , ( b - a ) + ( c - b ) + ( c - a ) );
                }
            }   
        }

        return result == INT_MAX ? -1 : result ;

    }
};
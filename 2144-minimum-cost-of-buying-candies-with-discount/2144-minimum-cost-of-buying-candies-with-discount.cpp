class Solution {
public:
    int minimumCost(vector<int>& cost) {
        
        if( cost.size() == 1 ) return cost[0] ;

        int n = cost.size() ;
        sort( cost.begin() , cost.end() );

        int result = 0 ;
        int count = 1 ;

        for( int i = n - 1 ; i >= 0 ; i -- ){

            if( count % 3 != 0 ) result += cost[i] ;
            count ++ ;
        }

        return result ;
    }
};
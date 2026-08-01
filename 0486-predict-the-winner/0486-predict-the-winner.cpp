class Solution {
public:
    bool solve( int left , int right , int p1 , int p2 , bool c1 , bool c2 , vector<int>& nums ){

        if( left > right ){
            if( p1 >= p2 ) return true ;
            return false ;
        }

        bool chooseleft , chooseright ;
        if( c1 ){

            chooseleft = solve( left + 1 , right , p1 + nums[left] , p2 , false , true , nums );
            
            chooseright = solve( left , right - 1 , p1 + nums[right] , p2 , false , true , nums );
            
            return chooseleft || chooseright ;
        }
        else{
            chooseleft = solve( left + 1 , right , p1 , p2 + nums[left] , true , false , nums );
            
            chooseright = solve( left , right - 1 , p1 , p2 + nums[right] , true , false , nums );
            
            return chooseleft && chooseright ;
        }

    }
    bool predictTheWinner(vector<int>& nums) {
        
        return solve( 0 , nums.size() - 1 , 0 , 0 , true , false , nums );
    }
};
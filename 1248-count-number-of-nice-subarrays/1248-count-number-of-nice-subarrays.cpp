class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        
        vector<int> temp ;

        for( int i = 0 ; i < nums.size() ; i++ ){
            if( nums[i] % 2 == 1 ){
                temp.push_back(i) ;
            }
        }

        if( temp.size() < k ) return 0 ;

        int result = 0 ;

        for( int i = 0 ; i <= temp.size() - k ; i++ ){

            int left = 0 , right = 0 ;

            if( i == 0 ){
                left = temp[0] + 1 ;
            }
            else{
                left = temp[i] - temp[i-1] ;
            }
            if(i + k == temp.size())
                right = nums.size() - temp[i + k - 1];
            else
                right = temp[i + k] - temp[i + k - 1];

            result += left * right ;
            
        }

        return result ;
    }
};
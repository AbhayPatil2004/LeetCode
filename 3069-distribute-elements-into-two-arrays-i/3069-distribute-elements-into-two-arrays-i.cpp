class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        
        vector<int> temp1 , temp2 ;

        temp1.push_back(nums[0]);
        temp2.push_back(nums[1]);

        for( int i = 2 ; i < nums.size() ; i++ ){
            if( temp1.back() >= temp2.back() ) temp1.push_back(nums[i]) ;
            else{
                temp2.push_back(nums[i]);
            }
        }

        for( auto i : temp2 ) temp1.push_back(i);
        

        return temp1 ;
    }
};
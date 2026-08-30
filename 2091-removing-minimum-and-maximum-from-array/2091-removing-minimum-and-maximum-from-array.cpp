class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        
        int minValue = INT_MAX ;
        int maxValue = INT_MIN ;
        int minIndex = 0 ;
        int maxIndex = 0 ;
        int n = nums.size() ;

        for( int i = 0 ; i < n ; i++ ){

            if( nums[i] < minValue ){
                minValue = nums[i] ;
                minIndex = i ;
            }
            if( nums[i] > maxValue ){
                maxValue = nums[i] ;
                maxIndex = i ;
            }
        }

        int left , right , result = INT_MAX ;
        if( minIndex == maxIndex ){
            left = minIndex ,
            right = minIndex ;
        }
        else if( minIndex < maxIndex ){
            left = minIndex ;
            right = maxIndex ;
        }
        else{
            left = maxIndex ;
            right = minIndex ;
        }

        cout << left <<" " <<  right <<endl;

        result = min( result , left + 1 + ( n - right ));
        cout<<result <<endl;
        result = min( result , right + 1 );
        cout<<result <<endl;
        result = min( result , n - left );
        cout<<result <<endl;

        return result ;
    }
};
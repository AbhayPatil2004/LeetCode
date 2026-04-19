class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        
        int result = INT_MIN ;

        for( int i = 0 ; i < nums1.size() ; i++ ){

            int index = 0 ;
            int start = i ;
            int end = nums2.size() - 1 ;

            while( start <= end ){

                int mid = start + ( end - start ) / 2 ;
                if( nums2[mid] >= nums1[i] ){
                    start = mid + 1 ;
                    index = mid ;
                }
                else{
                    end = mid - 1 ;
                }
            }

            result = max( result , index - i );
        }

        return result ;
    }
};
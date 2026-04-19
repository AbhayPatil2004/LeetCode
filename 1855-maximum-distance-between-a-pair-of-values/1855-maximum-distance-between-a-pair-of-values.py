class Solution(object):
    def maxDistance(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: int
        """

        result = 0

        for i in range( 0 , len(nums1)):

            index = 0 
            start = i 
            end = len(nums2) - 1 

            while( start <= end ):

                mid = start + int( ( end - start ) / 2 )

                if( nums2[mid] >= nums1[i] ):
                    start = mid + 1 
                    index = mid 
                else:
                    end = mid - 1 


            result = max( result , index - i )        

        return result 
        
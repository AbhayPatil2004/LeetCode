class Solution(object):
    def minimumDistance(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        dict = {}

        for i in range( 0 , len(nums) ):
            if( dict.get(nums[i])):
                dict[nums[i]].append(i)
            else:
                dict[nums[i]] = [i]

        
        result = 1000000

        for key in dict:
            
            arr = dict[key]
            if( len(arr) > 2 ):
                for j in range( 0 , len(arr) - 2 ):
                    a = arr[j] 
                    b = arr[j+1] 
                    c = arr[j+2]

                    result = min( result , ( c - a ) + ( b - a ) + ( c - b ))
        

        if( result == 1000000 ):
            return -1
        return result 
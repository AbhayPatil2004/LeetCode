class Solution(object):
    def getMinDistance(self, nums, target, start):
        """
        :type nums: List[int]
        :type target: int
        :type start: int
        :rtype: int
        """

        minDiff = 100000

        for i in range( 0 , len(nums)):
            if( nums[i] == target and abs( start - i ) < minDiff ):
                minDiff = abs( start - i )

        return minDiff 
        
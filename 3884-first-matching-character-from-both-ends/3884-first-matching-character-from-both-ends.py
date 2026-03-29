class Solution(object):
    def firstMatchingIndex(self, s):
        """
        :type s: str
        :rtype: int
        """

        start = 0 
        end = len(s) - 1 

        while( start <= end and s[start] != s[end] ):
            start += 1 
            end -= 1 
        
        if( start <= end ):
            return start 

        return -1    
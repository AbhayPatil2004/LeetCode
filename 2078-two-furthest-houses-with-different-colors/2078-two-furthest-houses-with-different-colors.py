class Solution(object):
    def maxDistance(self, colors):
        """
        :type colors: List[int]
        :rtype: int
        """

        result = 0 
        for i in range ( 0 , len(colors) ):

            index = len(colors) - 1

            while( index > i and colors[i] == colors[index]):
                index -= 1 

            result = max( result , abs( i - index ))

        return result 
        
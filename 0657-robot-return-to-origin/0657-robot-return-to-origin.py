class Solution(object):
    def judgeCircle(self, moves):
        """
        :type moves: str
        :rtype: bool
        """

        x = 0 
        y = 0 

        for i in range( 0 , len(moves) ):
            if( moves[i] == 'U' ):
                x += 1 
            elif( moves[i] == 'D' ):
                x -= 1 
            elif( moves[i] == 'L' ):
                y += 1
            else:
                y -= 1 


        if( x != 0 or y != 0 ):
            return False

        return True        
            
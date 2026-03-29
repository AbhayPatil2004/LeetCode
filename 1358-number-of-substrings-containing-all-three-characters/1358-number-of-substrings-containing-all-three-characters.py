class Solution(object):
    def numberOfSubstrings(self, s):
        """
        :type s: str
        :rtype: int
        """
        
        lasta = -1
        lastb = -1
        lastc = -1
        result = 0 

        for i in range( 0 , len(s) ):
            if( s[i] == 'a' ):
                lasta = i 
            elif( s[i] == 'b' ):
                lastb = i 
            else:
                lastc = i 

            result += min( lasta , lastb , lastc ) + 1 


        return result             

class Solution(object):
    def constructProductMatrix(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: List[List[int]]
        """

        MOD = 12345
        arr = []

        for i in range( 0 , len(grid) ):
            for j in range( 0 , len(grid[0])):
                arr.append( grid[i][j] % MOD )


        prefix = [] 
        suffix = [1] * len(arr)
        multi = 1 

        for i in range( 0 , len(arr) ):
            multi = ( multi * arr[i] ) % MOD
            prefix.append(multi)         
        
        multi = 1 

        for i in range( len(arr) - 1 , -1 , -1 ):
            multi = ( multi * arr[i] ) % MOD
            suffix[i] = multi         

        result = []
        k = 0 

        for i in range( 0 , len(grid) ):
            gridarr = []
            for j in range( 0 , len(grid[0])):
                if( k == 0 ):
                    gridarr.append( suffix[k+1] % MOD )
                elif( k == len(arr) - 1 ):
                    gridarr.append( prefix[k-1] % MOD )   
                else:
                    gridarr.append( ( prefix[k-1] * suffix[k+1] ) % MOD )     

                k += 1 

            result.append( gridarr )        


        return result     
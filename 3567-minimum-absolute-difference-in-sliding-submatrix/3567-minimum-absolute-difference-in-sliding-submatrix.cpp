class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        
        vector<vector<int>> result ;

        for( int i = 0 ; i <= grid.size() - k ; i++ ){
            
            vector<int> temp ; 

            for( int j = 0 ; j <= grid[0].size() - k ; j++ ){

                set<int> s ;
                
                for( int row = i ; row < i + k ; row ++ ){
                    for( int col = j ; col < j + k ; col ++ ){
                        s.insert(grid[row][col]);
                    }
                }

                if( s.size() == 1 ) temp.push_back(0) ;
                else{
                    int minDiff = INT_MAX;
                    auto it = s.begin();
                    auto prev = it++;

                    while (it != s.end()) {
                        minDiff = min(minDiff, abs(*it - *prev));
                        prev = it;
                        it++;
                    }

                    temp.push_back(minDiff);
                }
            }

            result.push_back(temp);
        }

        return result ;
    }
};
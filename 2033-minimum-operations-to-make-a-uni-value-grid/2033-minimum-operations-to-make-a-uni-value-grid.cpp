class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        
        vector<int> temp;

        // Step 1: Flatten + feasibility check
        int base = grid[0][0];

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {

                if (abs(grid[i][j] - base) % x != 0)
                    return -1;

                temp.push_back(grid[i][j]);
            }
        }

        
        sort(temp.begin(), temp.end());

        
        int median = temp[temp.size() / 2];

       
        int operations = 0;
        for (int val : temp) {
            operations += abs(val - median) / x;
        }

        return operations;
    }
};
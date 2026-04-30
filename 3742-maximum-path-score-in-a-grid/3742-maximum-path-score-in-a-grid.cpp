class Solution {
public:
    int solve(int i, int j, int m, int n, vector<vector<int>>& grid, int k,
              vector<vector<vector<int>>>& dp) {

        if (i >= m || j >= n) return INT_MIN;

        if (grid[i][j] != 0) k--;

        if (k < 0) return INT_MIN;

        if (i == m - 1 && j == n - 1) return grid[i][j];

        if (dp[i][j][k] != -1) return dp[i][j][k];

        int right = solve(i, j + 1, m, n, grid, k, dp);
        int down = solve(i + 1, j, m, n, grid, k, dp);

        int res = max(right, down);

        if (res == INT_MIN) return dp[i][j][k] = INT_MIN;

        return dp[i][j][k] = grid[i][j] + res;
    }

    int maxPathScore(vector<vector<int>>& grid, int k) {

        int m = grid.size();
        int n = grid[0].size();

        vector<vector<vector<int>>> dp(m,
            vector<vector<int>>(n, vector<int>(k + 1, -1)));

        int res = solve(0, 0, m, n, grid, k, dp);

        return res < 0 ? -1 : res;
    }
};
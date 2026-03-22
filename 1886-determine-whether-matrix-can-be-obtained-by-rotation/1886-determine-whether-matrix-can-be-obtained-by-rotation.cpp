class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        
        int n = mat.size();

        
        bool valid = true;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(mat[i][j] != target[i][j]){
                    valid = false;
                    break;
                }
            }
            if(!valid) break;
        }
        if(valid) return true;

        
        valid = true;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(mat[i][j] != target[j][n - i - 1]){
                    valid = false;
                    break;
                }
            }
            if(!valid) break;
        }
        if(valid) return true;

        
        valid = true;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(mat[i][j] != target[n - i - 1][n - j - 1]){
                    valid = false;
                    break;
                }
            }
            if(!valid) break;
        }
        if(valid) return true;

        
        valid = true;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(mat[i][j] != target[n - j - 1][i]){
                    valid = false;
                    break;
                }
            }
            if(!valid) break;
        }

        return valid;
    }
};
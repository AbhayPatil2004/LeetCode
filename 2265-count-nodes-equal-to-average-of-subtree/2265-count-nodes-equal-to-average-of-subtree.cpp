/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void calculateSumN( TreeNode* &root , int &sum , int &n ){

        if( root == NULL ) return ;

        n ++ ;
        sum += root -> val ;
        calculateSumN( root -> left , sum , n );
        calculateSumN( root -> right , sum , n );
    }
    void solve( TreeNode* &root , int &result ){

        if( root == NULL ){
            return ;
        }

        int sum = 0 , n = 0 ;
        calculateSumN( root , sum , n );

        if( sum / n == root -> val ) result ++ ;

        solve( root -> left , result );
        
        solve( root -> right , result );
    }
    int averageOfSubtree(TreeNode* root) {

        int result = 0 ;
        solve( root , result );

        return result ;   
    }
};
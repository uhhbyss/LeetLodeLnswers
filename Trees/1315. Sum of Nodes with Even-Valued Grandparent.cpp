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
    int sumEvenGrandparent(TreeNode* root) {
        // current = root;
        helper(NULL,NULL, root);
        return sum;
    }
    
    void helper(TreeNode* gP, TreeNode* parent, TreeNode* root){
        if(root == NULL){
            return;
        }
        
        TreeNode* grandPar = parent;
        TreeNode* Parent = root;
        TreeNode* current = root->left;
        
        if((gP!=NULL) && ((gP->val)%2==0)){
            sum+=root->val;
        }
        
        helper(grandPar, Parent, current);
        current = root->right;
        helper(grandPar,Parent,current);
        return;
    }
 
    
private:
    // TreeNode* grandPar;
    // TreeNode* Parent;
    // TreeNode* current;
    int sum = 0;
};
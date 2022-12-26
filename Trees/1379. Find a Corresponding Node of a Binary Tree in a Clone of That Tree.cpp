/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        ghost = cloned;
        helper(ghost,target);
        return answer;
        
    }
    
    void helper(TreeNode* cloned, TreeNode* target){
        if(answer == NULL){
            if(cloned == NULL){
                return;
            }
            if(cloned->val == target->val){
                answer = cloned;
                return;
            }
            helper(cloned->left,target);
            helper(cloned->right,target);
        }
    }
    
private:
    TreeNode* ghost;
    TreeNode* answer = NULL;
};
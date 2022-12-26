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
    int deepestLeavesSum(TreeNode* root) {
//         queue<TreeNode*> next;
//         next.push(root);
        
//         while(!next.empty()){
//             TreeNode* ghost = next.front();
//             next.pop();
//             if(ghost->left!=nullptr){
//                next.push(ghost->left); 
//                 sum=0;
//             }
//             if(ghost->right!=nullptr){
//                next.push(ghost->right); 
//                 sum = 0;
//             }
//             if(ghost->left==nullptr && ghost->right==nullptr){
//                 sum+=ghost->val;
//             }
//         }
//         return sum;
        
        depth++;
        if(root == NULL){
            return sum;
        }
        
        if(depth > maxDepth){
            maxDepth = depth;
            sum = root->val;
            
        }
        else if(depth == maxDepth){
            sum+=root->val;
        }
        
        deepestLeavesSum(root->left);
        depth--;
        deepestLeavesSum(root->right);
        depth--;

        return sum;
    }
    
private:
    int depth = 0;
    int maxDepth = 0;
    int sum = 0;
};
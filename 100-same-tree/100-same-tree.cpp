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
    bool isSameTree(TreeNode* p, TreeNode* q) {
    if(p==nullptr and q==nullptr) return true;
    if(p==nullptr or q==nullptr) return false;
    if(p->val!=q->val) return false;
    
    if(isSameTree(p->left,q->left) and isSameTree(p->right,q->right))  
        return true;
    else 
        return false;
        
        
        
        
        
        
//         if(p==nullptr or q==nullptr)
//             return true;
//         if(p->val !=q->val)
//             return false;
//         if((p->left==NULL and q->left!=NULL) and (p->left!=NULL and q->left==NULL))
//             return false;
//         if((p->left==NULL and q->left!=NULL) and (p->left!=NULL and q->left==NULL))    
//             return false;
//         //if((p->left!=NULL && q->left!=NULL ) or (p->right!=NULL && q->right!=NULL))
//         return isSameTree(p->left,q->left) and isSameTree(p->right,q->right);  
        
        
       
    }
};
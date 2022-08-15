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
    TreeNode* invertTree(TreeNode* root) {
        stack<TreeNode*> st;
        st.push(root);
        
        while(!st.empty())
        {
            TreeNode *curr=st.top();
            st.pop();
            if(curr==nullptr)
                continue;
            st.push(curr->left);
            st.push(curr->right);
            swap(curr->left,curr->right);
            
        }
        return root;
    }
    
};

/*

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root)
        {
            if(root->left!=nullptr)
            invertTree(root->left);
            if(root->right!=nullptr)
            invertTree(root->right);
            TreeNode *temp=root->left;
            root->left=root->right;
            root->right=temp;
            return root;
        }
        return root;
    }
};

*/

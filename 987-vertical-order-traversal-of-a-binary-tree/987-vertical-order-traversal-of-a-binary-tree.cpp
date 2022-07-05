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
private: 
   map<int, map<int, multiset<int>>> result;
   
   void inorderTraversal(TreeNode* node, int hIndex, int vIndex) {
       if (node == NULL) return;
       
       inorderTraversal(node->left, hIndex-1, vIndex+1);
       result[hIndex][vIndex].insert(node->val);
       inorderTraversal(node->right, hIndex+1, vIndex+1);
   }

public:
   vector<vector<int>> verticalTraversal(TreeNode* root) {
       inorderTraversal(root, 0, 0);
       
       vector<vector<int>> resultVector;
       for(auto col: result) {
           vector<int> colVector;
           for(auto node: col.second) {
               for(auto val: node.second) {
                   colVector.push_back(val);   
               }
           }
           resultVector.push_back(colVector);
       }
       return resultVector;
   }
};
   
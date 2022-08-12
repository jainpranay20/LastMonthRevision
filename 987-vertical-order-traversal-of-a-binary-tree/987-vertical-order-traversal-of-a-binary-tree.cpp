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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
	   //multiset is used to keep the values in ascending order and we can have repetitive values too
        map<int, map<int, multiset<int>>>mp; 
        queue<pair<TreeNode*, pair<int, int>>>q;
		
        q.push({root, {0, 0}});          //coordinates of the root are (0,0)
        while(!q.empty()){
            TreeNode* node = q.front().first;
            int x = q.front().second.first, y = q.front().second.second;
            q.pop();
            mp[x][y].insert(node->val);  //inserting values in multiset corresponding to their coordinates 
            if(node->left) q.push({node->left, {x-1, y+1}});
            if(node->right) q.push({node->right, {x+1, y+1}});
        }
		
        vector<vector<int>>ans;
        for(auto p : mp){                //traversing the map
            vector<int>level;
            for(auto s : p.second){      //p.second is map<int, multiset<int>>
			    //inserting all the values of the multiset in level vector
                level.insert(level.end(), s.second.begin(), s.second.end()); 
            }
            ans.push_back(level);
        }
        return ans;
    }
};
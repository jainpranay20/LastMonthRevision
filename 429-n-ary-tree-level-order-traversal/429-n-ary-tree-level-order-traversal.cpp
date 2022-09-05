/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        
        if(root==nullptr)
            return ans;
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        { 
            vector<int> res;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                Node* temp=q.front();
                res.push_back(temp->val);
                q.pop();
                for(int j=0;j<temp->children.size();j++)
                {
                    if(temp->children[j])
                    q.push(temp->children[j]);
                    //cout<<temp->children[j]->val;
                }
            }
            ans.push_back(res);
        } 
        return ans;
    }
};
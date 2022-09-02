class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> ans(26,0);
        for(auto i:sentence)
        {
            ans[i-'a']++;
        }
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]==0)
                return false;
        }
        return true;
    }
};
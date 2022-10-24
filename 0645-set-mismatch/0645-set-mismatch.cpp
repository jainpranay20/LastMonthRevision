class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans;
        vector<int>v(nums.size()+1,0);
        for(auto i:nums)
        {
            v[i]++;
            if(v[i]>1)
                ans.push_back(i);
        }
        for(int i=1;i<nums.size()+1;i++)
        {
            if(v[i]==0)
                ans.push_back(i);
        }
        return ans;
    }
};
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int res=1;
        vector<int> ans(nums.size(),1);
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i]>nums[j])
                {
                    ans[i]=max(ans[i],ans[j]+1);
                }
            }
            res=max(res,ans[i]);
        }
        return res;
    }
};
class Solution {
public:
    int rob(vector<int>& nums) {
        int excl=0;
        int incl=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            int ans = excl ;
            excl = max(excl,incl);
            incl =ans +nums[i];
        }
        return max(excl,incl);
    }
};
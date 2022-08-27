class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()<3)
            return 0;
        for(int i=nums.size()-1;i>=2;i--)
        {
            if(nums[i]<nums[i-1]+nums[i-2])
                return nums[i]+nums[i-1]+nums[i-2];
            
        }
        return 0;
    }
};
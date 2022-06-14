class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0,j=0,count=0;
        while(j<nums.size())
        {
            if(nums[j]==1)
                j++;
            else if(nums[j]==0)
            {
                count=max(count,j-i);
                i=j;
                i++;
                j++;
            }
        }
        count=max(count,j-i);
        return count;
    }
};
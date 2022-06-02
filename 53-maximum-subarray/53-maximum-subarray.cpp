class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,maxi=0,flag=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
                flag=0;
            sum=sum+nums[i];
            if(maxi<sum)
                maxi=sum;
            if(sum<0)
                sum=0;
        }
        if(flag==1)
          maxi=*max_element(nums.begin(),nums.end());
        return maxi;
    }
};
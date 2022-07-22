class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int sum=0;
        for(auto i:nums)
            sum+=i;
        if(nums.size()<2)
            return 0;
    
        int j=nums.size()-2;
        int a=0;
        int b=sum;
        if((sum-nums[0])==0)
            return 0;
        for(int k=1;k<=j+1;k++)
        {
            a=a+nums[k-1];
            b=sum-a-nums[k];
            if(a==b)
                return k;
        }
        return -1;
    }
};
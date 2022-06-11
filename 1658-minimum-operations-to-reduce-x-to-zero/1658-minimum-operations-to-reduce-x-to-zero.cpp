class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        // example 
        // [1,1,4,2,3] , x=5
        // target = sum(nums)-x, which is => 6 in this case 
        // we will try to find longest subarray with given target
        // max length with target is 3 [1,1,4]
        // our ans is nums.size()-3 => 2
        
        int target=-x;
        for(int i:nums)
        {
            target+=i;
        }
        if(target<0)
            return -1;
        int j=0;
        int sum=0;
        int ans=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            sum+=nums[i]; 
            while(sum>target)
            {
                sum-=nums[j];
                j++;
            }
            if(sum==target)
            {
                ans=max(ans,i-j+1);
            }
        }
        return ans==INT_MIN?-1:n-ans;
    }
};
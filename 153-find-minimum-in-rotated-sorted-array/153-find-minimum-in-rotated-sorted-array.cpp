class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int n=nums.size();
        if(nums.size()==1)
            return nums[0];
        int high=n-1;
        int mid;
        while(low<=high)
        {
            mid=(low+high)/2;
            int prev=(mid+n-1)%n;
            int next=(mid+1)%n;
            if(nums[mid]<nums[prev] && nums[mid]<nums[next])
                return nums[mid];
            else if(nums[mid]>nums[n-1])
            {
                low=mid+1;
            }
            else
                high=mid-1;
        }
        return -1;
    }
};
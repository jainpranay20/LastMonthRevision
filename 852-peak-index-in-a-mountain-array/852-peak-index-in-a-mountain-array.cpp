class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int low=0;
        int n=nums.size();
        int high=n-1;
       
        while(low<=high)
        {
            int mid=(low+high)/2;
            if((mid-1<0 ||nums[mid]>=nums[mid-1]) && (mid+1>=n || nums[mid]>=nums[mid+1]))
                return mid;
            else if(nums[mid+1]>nums[mid])
                low=mid+1;
            else
                high=mid-1;
        }
        return -1;
    }
};
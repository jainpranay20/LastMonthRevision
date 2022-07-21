class Solution {
public:
    int findPeakElement(vector<int>& nums) {
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
        //  int n = nums.size();
        // int s=0;
        // int e = n-1;
        // while(s<=e)
        // {
        //     int m = s +(e-s)/2;
        //     if((m-1<0 || nums[m] >= nums[m-1]) && (m+1>=n || nums[m]>=nums[m+1]))
        //         return m;
        //     else if(nums[m+1] > nums[m])
        //         s =m+1;
        //     else 
        //         e = m-1;
        // }
        // return -1;
    
};
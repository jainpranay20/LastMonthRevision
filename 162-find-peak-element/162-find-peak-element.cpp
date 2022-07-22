class Solution {
public:
    int findPeakE(vector<int>nums, int low, int high) {
    if (low == high)
        return low;
    int mid = (low + high) / 2;
    if (nums[mid] > nums[mid + 1])
        return findPeakE(nums, low, mid);
    return findPeakE(nums, mid + 1, high);
}

    int findPeakElement(vector<int>& nums) {
        int a=findPeakE(nums,0,nums.size()-1);
        return a;
    }
        
    //     int low=0;
    //     int n=nums.size();
    //     int high=n-1;
    //     while(low<=high)
    //     {
    //         int mid=(low+high)/2;
    //         if((mid-1<0 ||nums[mid]>=nums[mid-1]) && (mid+1>=n || nums[mid]>=nums[mid+1]))
    //             return mid;
    //         else if(nums[mid+1]>nums[mid])
    //             low=mid+1;
    //         else
    //             high=mid-1;
    //     }
    //     return -1;
    // }
};
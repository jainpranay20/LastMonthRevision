class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int n=nums.size()-1;
        int high=n;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                high=mid-1;
            else
                low=mid+1;
        }
        return -1;
    }
};
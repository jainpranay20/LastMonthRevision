class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int res=0;
        while(low<=high)
        {
            int mid=(low+high)/2;
            
            if(nums[mid]==target)
            {
                res=mid;
                return res;
            }
            else if(nums[mid]<target)
            {
                res=mid+1;
                low=mid+1;
            }
            else
                {res=mid;high=mid-1;}
        }
        return res;
    }
};
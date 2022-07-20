class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        
        int start=0;
        int n=nums.size();
        int end=n-1;
       
        int res=-1;
        //for left index
        while(start<=end)
        {
            int mid=end+(start-end)/2;
            if(nums[mid]==target)
            {
                res=mid;
                end=mid-1;
            }
            else if(nums[mid]>target)
            {
                end=mid-1;
            }
            else
                start=mid+1;
        }
        ans.push_back(res);
        start=0;
        n=nums.size();
        end=n-1;
        res=-1;
        while(start<=end)
        {
            int mid=end+(start-end)/2;
            if(nums[mid]==target)
            {
                res=mid;
                start=mid+1;
            }
            if(nums[mid]>target)
            {
                end=mid-1;
            }
            else
                start=mid+1;
        }
        ans.push_back(res);
        return ans;
    }
};
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        int l = 0,r=nums.size()-1;
        while(l<=r){
            int m = l + (r-l)/2;
            if(m%2){
				// (even odd) i.e. we are on the left side of unique element--> go right
                if(nums[m-1]==nums[m])
                    l = m+1;
				// (even odd) pair violated, happens on the right side of unique element--> go left
                else{
                    r = m-1;
                }
            }else{
				// (even odd) i.e. we are on the left side of unique element--> go right
                if(nums[m]==nums[m+1]){
                    l = m+1;
				// (even odd) pair violated, happens on the right side of unique element--> go left
                }else{
                    r = m-1;
                }
            }
        }
        return nums[l];
    }
};
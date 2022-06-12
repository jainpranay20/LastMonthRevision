class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
         int j=0,i=0,sum=1,count=0,score=0;
        while(j<nums.size())
        {
            sum=(sum * nums[j]);
            //score=(sum)*(j-i+1);
            while(i<=j and sum>=k){
                sum=sum/nums[i];
                i++;
            }
            if(sum<k)
            {
                count+=j-i+1;
                
            }
            j++;
        }
        return count;
    }
};
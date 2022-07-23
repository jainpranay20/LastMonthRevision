class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long int sum=0;long long int ans,j=-1;long long int maintain=1,count=0;long long int k=0;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            if(nums[i]==0)
                count++;
            if(sum==j && (nums[i-1]==0))
            {
                count=count+(i-k);
                //cout<<count<<" ";
                continue;  
            }
            //cout<<count<<" ";
            j=sum;k=i;
            
        }
        return count;
    }
};
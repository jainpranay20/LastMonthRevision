class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long j=0,i=0,sum=0,count=0,score=0;
        while(j<nums.size())
        {
            sum=(sum + nums[j]);
            score=(sum)*(j-i+1);
            while(i<=j and score>=k){
                sum=sum-nums[i];
                i++;
                score=sum*(j-i+1);
                
            }
            if(score<k)
            {
                count+=j-i+1;
                
            }
            j++;
        }
        return count;
    }
};
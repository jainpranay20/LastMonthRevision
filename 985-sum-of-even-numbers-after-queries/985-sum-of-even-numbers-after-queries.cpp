class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int sum=0;
        for(auto i:nums)
        {
            if(i%2==0)
            sum=sum+i;
        }
        vector<int> ans;
        int total=0;
        for(auto i:queries)
        {
            total=sum;
            if(nums[i[1]]%2==0)
            {
                total-=nums[i[1]];
                sum-=nums[i[1]];
            }   
            nums[i[1]]=nums[i[1]]+i[0];
            
            if(nums[i[1]]%2==0)
            {
                total+=nums[i[1]];
                sum=sum+nums[i[1]];
            }  
            ans.push_back(total);
        }
        return ans;
        
        
        //o(n2)
        // vector<int> ans;
        // for(auto i:queries)
        // {
        //     nums[i[1]]=nums[i[1]]+i[0];
        //     int sum=0;
        //     for(auto j:nums)
        //     {
        //         if(j%2==0)
        //             sum=sum+j;
        //     }
        //     ans.push_back(sum);
        // }
        // return ans;
    }
};
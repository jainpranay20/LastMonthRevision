class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long int i=0;long long int count=0;
        long long int n=nums.size(),sumi=0;
        long long int sum=0;
        for(auto i:nums)
        {
            sum=sum+i;
        }
        while(i<n-1)
        {
            sumi=sumi+nums[i];
            long long int sumj=sum-sumi;
            if(sumi>=sumj)
                count++;
            i++;
        }
        return count;
    }
};
// int sum(int a,int b,vector<int> &nums)
//     {
//         int s=0;
//         while(a<=b)
//         {
//             s=s+nums[a];
//             a++;
//         }
//         return s;
//     } 
//     int waysToSplitArray(vector<int>& nums) {
//         int n=nums.size();
//         int count=0;
//         for(int i=0;i<n-1;i++)
//         {
//             int a=sum(0,i,nums);
//             int b=sum(i+1,n-1,nums);
//             if(a>=b)
//                 count++;
//         }
//         return count;
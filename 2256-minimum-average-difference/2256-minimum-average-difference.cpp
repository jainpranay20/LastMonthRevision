class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        long long sumj=0;long long n=nums.size();
        for(auto i:nums)
            sumj=sumj+i;
        //cout<<sum;
        long long avg=0;long long k=INT_MAX;long long index=0;
        long long i=0,sumi=0;
        while(i<nums.size())
        {
            sumi=sumi+nums[i];
            //cout<<sumi<<" ";
            sumj=sumj-nums[i];
            //cout<<sumj<<" ";
            //avg=abs((sumi/(i+1))-(sumj/(n-i-1)));
            long long a=sumi/(i+1);
            long long b = (i == n-1) ? 0: sumj/(n-i-1);
            avg=abs(a-b);
            if(k>avg)
            {
                k=avg;
                index=i;
            }
            i++;
        }
        return index;
//          int n=nums.size();
        
//         long long right_sum = 0;
//         for(auto it:nums) right_sum += it;
        
//         int mini = INT_MAX;
//         int idx = 0;
        
//         long long left_sum = 0;
        
//         for(int i=0; i<n; i++)
//         {
//             left_sum += nums[i];
//             right_sum -= nums[i];
            
//             long long first = (left_sum/(i+1));
    
//             long long last = i<n-1 ? (right_sum/(n-i-1)) : 0;
            
//             int diff = abs(first - last);
            
//             if(diff < mini)
//             {
//                 mini = diff;
//                 idx = i;
//             }
//         }
        
//         return idx;
    
    }
};
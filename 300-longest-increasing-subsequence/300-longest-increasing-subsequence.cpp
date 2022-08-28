class Solution
{
    public:
        int lengthOfLIS(vector<int> &nums)
        {

            if (nums.size() == 0) return 0;
            vector<int> v;
            v.push_back(nums[0]);
            for (int i = 1; i < nums.size(); i++)
            {
                if (nums[i] > v.back())
                {
                    v.push_back(nums[i]);
                }
                else
                {
                    int idx = lower_bound(v.begin(), v.end(), nums[i]) - v.begin();
                    v[idx] = nums[i];
                }
            }
            return v.size();

           	// O(n2) onr of the best solution
           	// int res=1;
           	// vector<int> ans(nums.size(),1);
           	// for(int i=0;i < nums.size();i++)
           	// {
           	//     for(int j=0;j < i;j++)
           	//     {
           	//         if(nums[i]>nums[j])
           	//         {
           	//             ans[i]=max(ans[i],ans[j]+1);
           	//         }
           	//     }
           	//     res=max(res,ans[i]);
           	// }
           	// return res;
        }
};
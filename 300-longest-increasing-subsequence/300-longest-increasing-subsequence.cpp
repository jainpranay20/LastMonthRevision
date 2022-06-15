class Solution{
    public:
       	// int lisbruteforce(vector<int>& nums,int index,int prev_index) 
       	// {
       	//    	// time complexity 2^n it will definetly gives tle with o(n) auxiliary stack space 
       	//     if(index==nums.size())	// cant take more elements
       	//         return 0;
       	//     int len=0+lisbruteforce(nums, index + 1, prev_index); 	// if we skip that element
       	//     if(prev_index==-1 || nums[index] > nums[prev_index])   	// taking that element
       	//     {
       	//         len=max(len, 1+ lisbruteforce(nums, index + 1, index));
       	//     }
       	//     return len;
       	// }

        int lengthOfLIS(vector<int> &nums)
        {
           	//	// Brute force we are passing index and previous index
           	// int ans = lisbruteforce(nums,0,-1);
           	// return ans;

           	//we can also solve this using lcs yeah write
                 int n = nums.size();
                vector<int> nums1 = nums;

               	// sort the array
                sort(nums1.begin(), nums1.end());

               	// remove duplicates
                vector<int>::iterator ip = unique(nums1.begin(), nums1.end());
                nums1.erase(ip, nums1.end());
                int m = nums1.size();
                return lcs(n, m, nums, nums1);
        }
            
            int lcs(int x, int y, vector<int> &s1, vector<int> &s2)
            {
                int dp[x + 1][y + 1];
                for (int i = 0; i <= x; i++)
                {
                    dp[i][0] = 0;
                }
                for (int j = 0; j <= y; j++)
                {
                    dp[0][j] = 0;
                }
                for (int i = 1; i <= x; i++)
                {
                    for (int j = 1; j <= y; j++)
                    {
                        if (s1[i - 1] == s2[j - 1])
                        {
                            dp[i][j] = 1 + dp[i - 1][j - 1];
                        }
                        else
                        {
                            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                        }
                    }
                }
                return dp[x][y];
            }
};
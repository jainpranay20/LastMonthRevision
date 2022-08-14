class Solution
{
    public:
        int deleteAndEarn(vector<int> &nums)
        {
            vector<int> freq(10001, 0);
            for (int i = 0; i < nums.size(); ++i)
                freq[nums[i]]++;
            int incl = 0, excl = 0;
            for (int i = 1; i < 10001; ++i)
            {
                int ans = excl + freq[i] *i;
                excl = max(incl, excl);
                incl = ans;
            }
            return max(incl, excl);
        }
};
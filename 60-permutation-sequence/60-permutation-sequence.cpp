class Solution
{
    public:
        void nextPermutation(vector<int> &nums)
        {
           	//mast question 
            int size = nums.size();
            int i = size - 2;
            while (i >= 0 && nums[i] >= nums[i + 1]) i--;
            if (i >= 0)
            {
                int j = size - 1;
                while (nums[j] <= nums[i]) j--;	//we want strictly greater even equal to not works
                swap(nums[j], nums[i]);
            }
            reverse(nums.begin() + i + 1, nums.end());
        }
    string getPermutation(int n, int k)
    {
        vector<int> num;
        for (int i = 1; i <= n; i++)
        {
            num.push_back(i);
        }
        for (int j = 0; j < k - 1; j++)
        {
            nextPermutation(num);
        }
       	// for(auto i:num)
       	//     cout<<i;
        std::ostringstream os;
    for (int i: num) {
        os << i;
    }
 
    std::string str(os.str());
    std::cout << str;
        return str;
    }
};
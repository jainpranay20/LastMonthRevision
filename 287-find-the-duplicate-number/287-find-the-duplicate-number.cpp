class Solution
{
    public:
        int findDuplicate(vector<int> &nums){

           	//tc 0(n) space O(n)
           	// set<int> s;int a;
           	// for(int i=0;i < nums.size();i++)
           	// {
           	//     if(s.find(nums[i])!=s.end())
           	//     {
           	//         a=nums[i];
           	//         break;
           	//     }
           	//     s.insert(nums[i]);
           	// }
           	// return a;

            
           	//tc 0(N) space O(1)
            if (nums.size() > 1)
            {
                int slow = nums[0];
                int fast = nums[nums[0]];
                while (slow != fast)
                {
                    slow = nums[slow];
                    fast = nums[nums[fast]];
                }
                fast=0;
                while(slow!=fast)
                {
                    slow=nums[slow];
                    fast=nums[fast];
                }
                return slow;
            }
            return -1;
            
        }
};
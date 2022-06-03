class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int> s;int a;
        for(int i=0;i<nums.size();i++)
        {
            if(s.find(nums[i])!=s.end())
            {
                a=nums[i];
                break;
            }
            s.insert(nums[i]);
        }
        return a;
    }
};
class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned int> permutation(target+1,0);
        permutation[0]=1;
        for(int i=1;i<=target;i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(i>=nums[j])
                    permutation[i]=permutation[i]+permutation[i-nums[j]];
            }
        }
        return permutation[target];
    }
};
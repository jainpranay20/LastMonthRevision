class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int first = INT_MIN,flag=0;
        for(int i=0;i<nums.size();i++)
        {
            if(first<nums[i])
            {
                first=nums[i];
                flag=i;
            }
        }
        cout<<first;
        int second=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(second<nums[i] and i!=flag)
            {
                second=nums[i];
            }
        }
        cout<<second;
        return (first-1)*(second-1);
    }
};
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // O(nlogn) time o(n)space
//         set<int> st;
//         for(auto i:nums)
//         {
//             st.insert(i);
//         }
//         int count=st.size();
//         int j = 0;
//         for (int x: st) {
//         nums[j++] = x;
//         }
//         return count;
        int i=0,j=0;
        for(int k=1;k<nums.size();k++)
        {
            if(nums[k]!=nums[i])
            {
                i++;
                j++;
                swap(nums[i],nums[j]);
            }
            else j++;
        }
        return i+1;
        
        // 2 pointer approach O(n) time space O(n) 
        // int i=0,j=1;
        // while(j<nums.size())
        // {
        //     if(nums[i]!=nums[j])
        //     {
        //         i++;
        //         nums[i]=nums[j];
        //     }
        //     j++;
        // }
        // return i+1;
    }
};
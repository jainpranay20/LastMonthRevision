class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //O(n)time O(1)space
        int candidate1 = -1, candidate2 = -1;
        int count1 = 0, count2 = 0;
        for(int i=0;i<nums.size();i++){
            if(candidate1 == nums[i]){
                count1++;
            }
            else if(candidate2 == nums[i]){
                count2++;
            }
            else if(count1 == 0){
                candidate1 = nums[i];
                count1++;
            }
            else if(count2 == 0){
                candidate2 = nums[i];
                count2++;
            }
            //if it is not equal to any of these then simply reduce the both count.
            else{
                count1--;
                count2--;
            }
            
        }
        //check whether these potential candidate are really in majority or not.
        vector<int> ans;
        count1 = 0;
        count2 = 0;
        for(auto x : nums){
            if(candidate1 == x) count1++;
            else if(candidate2 == x) count2++;
        }
        if(count1 > nums.size()/3) ans.push_back(candidate1);
        if(count2 > nums.size()/3) ans.push_back(candidate2);
        return ans;
        
        
        
        //O(n) space O(n)time complexity
//          unordered_map<int,int> mp;
//         vector<int> ans;
//         for(auto i:nums)
//             mp[i]++;
//         for(auto itr:mp)
//         {
//             if(itr.second>nums.size()/3)
//                 ans.push_back(itr.first);
//         }
//         return ans;
        
    }
};
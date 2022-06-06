class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        //o(n) space 0(n) time
//         vector<int>ans;
//         unordered_map<int,int> mp;
//         for(int i=0;i<nums.size();i++)
//         {
//             mp.insert({nums[i],i});
//         }
//         for(auto i:mp)
//         {
//             if(mp.find(target-i.first)!=mp.end())
//             {
//                 ans.push_back(i.second);
//             }
//         }
//         return ans;
        
        
        
        //O(nlogn) for sorting o(n) space
        vector<pair<int,int>>vp;
        int n= nums.size();
        for(int i=0; i<n; i++){
            vp.push_back({nums[i],i});
        }
        sort(vp.begin(), vp.end());
        int x, y;
        int j=0;
        int k=n-1;
        while(j<k){
            if(vp[j].first+vp[k].first== target)
            {
                x=vp[j].second;
                y=vp[k].second;
                break;
            }
            if(vp[j].first+vp[k].first > target)
                k--;
            if(vp[j].first+vp[k].first < target)
                j++;
        }
        return {x,y};
    }
};
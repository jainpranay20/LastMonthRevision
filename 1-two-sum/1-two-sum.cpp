class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        //o(n) space 0(n) time
        //  unordered_map<int, int> indices;
        // for (int i = 0; i < nums.size(); i++) {
        //     if (indices.find(target - nums[i]) != indices.end()) {
        //         return {indices[target - nums[i]], i};
        //     }
        //     indices[nums[i]] = i;
        // }
        // return {};

        vector<int> index;
        int size=nums.size();
        for(int i=0;i<size;i++)
        {
            int k=target-nums[i];
            for(int j=i+1;j<size;j++)
            {
                if(nums[j]==k)
                {
                    index.push_back(i);
                    index.push_back(j);
                    break;
                }
            }
        }
        return index;
    
	//Time Complexity: O(n^2)
        
        //O(nlogn) for sorting o(n) space
        // vector<pair<int,int>>vp;
        // int n= nums.size();
        // for(int i=0; i<n; i++){
        //     vp.push_back({nums[i],i});
        // }
        // sort(vp.begin(), vp.end());
        // int x, y;
        // int j=0;
        // int k=n-1;
        // while(j<k){
        //     if(vp[j].first+vp[k].first== target)
        //     {
        //         x=vp[j].second;
        //         y=vp[k].second;
        //         break;
        //     }
        //     if(vp[j].first+vp[k].first > target)
        //         k--;
        //     if(vp[j].first+vp[k].first < target)
        //         j++;
        // }
        // return {x,y};
    }
};
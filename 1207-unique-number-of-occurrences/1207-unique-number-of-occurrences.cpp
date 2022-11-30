class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp,mp1;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        for(auto i:mp)
        {
            if(mp1[i.second]==1)
                return false;
            mp1[i.second]++;
        }
        
        return true;
    }
};
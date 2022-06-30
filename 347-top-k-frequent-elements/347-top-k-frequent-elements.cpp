class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        priority_queue<pair<int,int>> pq;
        
        for(auto i:nums)
        {
            mp[i]++;
        }
        for(auto i:mp)
        {
            pq.push({i.second,i.first});
            cout<<i.second<<" ";
            // while(k<pq.size())
            // {
            //     pq.pop();
            // }
        }
        vector<int> ans;
        while(!pq.empty()&& k--)
        {
            auto temp=pq.top();
            pq.pop();
            ans.push_back(temp.second);
        }
        
        
        
        
        // sort(mp.begin(),mp.end(),cmp);
        // vector<int> ans;int n=0;
        // for (auto it = mp.begin();it != mp.end(); ++it)
        // {
        //         if(n<k)
        //         {
        //             ans.push_back(it->first);
        //             n++;
        //         }
        // }    
        return ans;
    }
};
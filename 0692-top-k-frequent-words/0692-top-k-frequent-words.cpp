class Solution {
public:
    struct cmp{
        bool operator()(pair<int,string> a, pair<int,string> b) const{
        if(a.first < b.first) return true;
        else if(a.first == b.first && a.second>b.second) return true;
        return false;
    }
    };
    
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        unordered_map<string,int> mp;
        priority_queue<pair<int,string>,vector<pair<int,string>>,cmp> pq;
        for(auto i:words)
        {
            mp[i]++;
        }
        for(auto i:mp)
        {
            pq.push({i.second,i.first});
        }
        vector<string> ans;
        while(!pq.empty() and k--)
        {
            auto temp = pq.top();
            pq.pop();
            ans.push_back(temp.second);
        }
        return ans;
    }
};
class Solution {
public:
    static bool comp(pair<int,int>a,pair<int,int>b)
    {
        return a.second>b.second;
    }
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        vector<pair<int,int>>v;
        for(int i=0;i<plantTime.size();i++)
            v.push_back({plantTime[i],growTime[i]});
        sort(v.begin(),v.end(),comp);
        int first=0,ans=0;
        for(int i=0;i<v.size();i++)
        {
            first+=v[i].first;
            ans=max(ans,first+v[i].second);
            
        }
        return ans;
    }
};
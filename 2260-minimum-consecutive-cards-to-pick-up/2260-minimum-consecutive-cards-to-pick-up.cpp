class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        int n=cards.size();
        unordered_map<int,int> mp;
        int res=INT_MAX;
        int found=0;
        //if we donot write i==0 outside still it works but the problem is that it will make found =0
        //res =-1 so we donot want that
       // mp[cards[0]]=0;
        for(int i=0;i<n;i++)
        {
            if(mp.find(cards[i])!=mp.end())
            {
                res=min(res,i-mp[cards[i]]+1);
                found=1;
            }
            mp[cards[i]]=i;
        }
        if(!found)
            res=-1;
        return res;
    }
};
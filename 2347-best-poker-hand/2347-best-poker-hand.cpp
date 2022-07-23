class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        map<int,int> mp1;
        map<char,int> mp2;
        for(auto i:ranks)
        {
            mp1[i]++;
        }
        for(auto i:suits)
        {
            mp2[i]++;
        }
        string str="High Card";
        
        for(auto i:mp2)
        {
            //cout<<i.second;
            if(i.second==5)
            {
                string s="Flush";
                return s;
            }
        }
        
        for(auto i:mp1)
        {
            //cout<<i.second;
            if(i.second>=3)
            {
                string s="Three of a Kind";
                return s;
            }
        }
        for(auto i:mp1)
        {
            //cout<<i.second;
            if(i.second==2)
            {
                string s="Pair";
                return s;
            }
        }
        return str;
    }
};


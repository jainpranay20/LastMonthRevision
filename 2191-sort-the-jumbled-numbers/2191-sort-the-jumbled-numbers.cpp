#include <algorithm>
class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
         map<int,vector<int>>mp;

    int n=nums.size();
    for(auto it:nums){
        string temp=to_string(it);
        int a=0;
        for(auto x:temp){
            int y=x-'0';
            a=a*10 + mapping[y];
        }
        mp[a].push_back(it);
    }
    vector<int>res;
    for(auto it:mp){
        for(auto i:it.second) res.push_back(i);
    }
    return res;
        
        
        
        // unordered_map<int,char> mp;
        // vector<int> ans;
        // for(int i=0;i<nums.size();i++)
        // {
        //     int a=nums[i];
        //     string str=to_string(a);
        //     for(int i=0;i<str.size();i++)
        //     {
        //         int digit=str[i]-'0';
        //         // char ch=mapping[digit];
        //         // str[i]=ch;
        //     }
        //     int b=stoi(str);
        //     mp[i]=b;
        // }
        // //sort(mp.begin(),mp.end());
        // for(auto i:mp)
        // {
        //     ans.push_back(nums[i.first]);
        // }
        // return ans;
    }
};
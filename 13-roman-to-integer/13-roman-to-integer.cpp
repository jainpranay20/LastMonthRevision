class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> ans;
        ans['I']=1;
        ans['V']=5;
        ans['X']=10;
        ans['L']=50;
        ans['C']=100;
        ans['D']=500;
        ans['M']=1000;
        int val=0;
        for(int i=0;i<s.size()-1;i++)
        {
            if(ans[s[i]]<ans[s[i+1]])
                val=val-ans[s[i]];
            else val=val+ans[s[i]];
        }
        val+=ans[s[s.size()-1]];
        return val;
    }
};
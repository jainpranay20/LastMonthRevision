class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count=0;
        for(int i=1;i<=s.size();i++)
        {
            string a=s.substr(0,i);
            for(auto i:words)
            {
                if(i==a)
                    count++;
            }
        }
        return count;
    }
};
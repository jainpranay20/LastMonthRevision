class Solution {
public:
    int maximum69Number (int num) {
        string str=to_string(num);
        int maxi=num;
        for(int i=0;i<str.size();i++)
        {
            string s=str;
            if(str[i]=='9')
            {
                s[i]='6';
            }
            else if(str[i]=='6')
            {
                s[i]='9';
            }
            int ans=stoi(s);
            maxi=max(maxi,ans);
        }
        return maxi;
    }
};
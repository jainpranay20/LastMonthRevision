class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string a=to_string(num);
        int count=0;
        int size=a.size();
        for(int i=0;i<size-k+1;i++)
        {
            string b=a.substr(i,k);
            cout<<b<<" ";
            if(stoi(b)!=0 && stoi(a)%stoi(b)==0 )
                count++;
        }
        return count;
    }
};
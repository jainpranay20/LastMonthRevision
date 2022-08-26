class Solution {
public:
    bool reorderedPowerOf2(int n) {
        // if((n&(n-1))==0)
        // {
        //     return true;
        // }
        // else
        //     return false;
        
        string x=to_string(n);
        sort(x.begin(),x.end());
         do {
                if(x[0]=='0') continue;
                int n1=stoi(x);
                if(n1 && !(n1&(n1-1))) return true;
            } while (next_permutation(x.begin(),x.end()));
        return false;
    }
};
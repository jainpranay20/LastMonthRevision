class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mpz;
        for(auto i:magazine)
        {
            mpz[i]++;
        }
        for(int i=0;i<ransomNote.size();i++)
        {
            if(mpz[ransomNote[i]]==0)               
                return false;
            mpz[ransomNote[i]]--;
            
            
        }
        return true;
    }
};
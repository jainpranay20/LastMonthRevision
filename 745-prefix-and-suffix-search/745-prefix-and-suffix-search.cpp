class WordFilter {
public:
    unordered_map<string, int> mp; //stores preffix and suffix sequence in it
    // https://leetcode.com/problems/prefix-and-suffix-search/discuss/2165519/C%2B%2B-or-Use-Hashmap-or-Simple-solution-with-comments-or-DLC-June-Day-18
    WordFilter(vector<string>& words) 
    {
        int n = words.size();
        
        for(int i=0; i<n; i++) //cover each word in words
        {
            string word = words[i]; 
            int wordsize = word.size();
            
            //storing all possible sequence of prefix and suffix of a word in the hashmap
            for(int j=1; j<=wordsize; j++) //for preffix 
            {
                string pre = word.substr(0,j);
                
                for(int k=0; k<wordsize; k++) //for suffix
                {
                    string suff = word.substr(k, wordsize);
                    mp[pre + "|" + suff] = i+1; //set index i+1 for all possible sequence of a word
                    //we set i+1 to handle i=0 because by-default map initialized with 0 
                }
            }
        }
    }
    
    int f(string prefix, string suffix) 
    {
        string s = prefix + "|" + suffix;
        return mp[s]-1; //if sequence found in hashmap we return its index
    }
};
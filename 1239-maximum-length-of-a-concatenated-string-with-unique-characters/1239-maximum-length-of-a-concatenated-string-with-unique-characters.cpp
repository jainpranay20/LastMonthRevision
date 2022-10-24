class Solution {
    int n;
    int dfs(vector<int> &bitidx, vector<string>& arr, int idx, int bitmaps)
    {
        if(idx == n)
            return 0;
        int val = dfs(bitidx, arr, idx+1, bitmaps);
        if(bitidx[idx] != -1 && !(bitidx[idx]&bitmaps))
        {
            int k = arr[idx].size() + dfs(bitidx, arr, idx+1, bitmaps|bitidx[idx]);
            val = max(k, val);
        }
        return val;
    }
public:
    int maxLength(vector<string>& arr) {
        n = arr.size();
        vector<int> bitidx(n,0);
        for(int i = 0; i < n; i++)
        {
            for(char &ch : arr[i])
            {
                if(bitidx[i] & (1 << (ch-'a')))
                {
                    bitidx[i] = -1;
                    break;
                }
                else
                {
                    bitidx[i] = bitidx[i] | (1 << (ch-'a'));
                }
            }
        }
        return dfs(bitidx, arr, 0, 0);
    }
};
/*
class Solution {
public:
    
    int maxUniqueChar(string s) {  // CHECKER FUNCTION
        int count[26] = {0};
        for(int i = 0; i < s.size(); i++)
            if(count[s[i] - 'a']++ > 0) return 0;
        return s.size();
    }
    
    void solve(vector<string> &arr, int index, string curr, int &ans) {
        if(index == arr.size()) {            // BASE CONDITION
            if(maxUniqueChar(curr) > ans) {
            ans = curr.size();
            }
            return;
        }
        solve(arr, index+1, curr, ans); 
        solve(arr, index+1, curr+arr[index], ans);
    }
    
    int maxLength(vector<string> &arr) {
        int ans = 0;
        solve(arr, 0, "", ans);
        return ans;
    }
};
*/

/*class Solution {
public:
    //my solution
    void solve(vector<char> &ans,int i,int j)
    {
        if(ans[i]=='L' && ans[j]=='L')
        {
            for(int k=i+1;k<j;k++)
            {
                ans[k]='L';
            }
        }
        else if(ans[i]=='R' && ans[j]=='R')
        {
            for(int k=i+1;k<j;k++)
            {
                ans[k]='R';
            }
        }
        else if(ans[i]=='L' && ans[j]=='R')
        {
            
        }
        else
        {
            int diff=j-i;
            int mid=(i+j)/2;
            if(diff%2==0)
            {
                for(int k=i+1;k<mid ;k++)
                {
                    ans[k]='R';
                }
                for(int k=mid+1;k<j;k++)
                {
                    ans[k]='L';
                }
            }
            else
            {
                for(int k=i+1;k<=mid ;k++)
                {
                    ans[k]='R';
                }
                for(int k=mid+1;k<j;k++)
                {
                    ans[k]='L';
                }
            }
            
        }
        
    }
    string pushDominoes(string dominoes) {
        int n=dominoes.size();
        vector<char> ans(n+2);
        ans[0]='L';
        ans[n+1]='R';
        
        for(int i=1;i<ans.size()-1;i++)
        {
            ans[i]=dominoes[i-1];
        }
        int j=0;
        int k=1;
        while(k<ans.size())
        {
            while(ans[k]=='.')
            {
                k++;
            }
            if(k-j>1)
            solve(ans,j,k);
            j=k;
            k++;
        }
        string res="";
        for(int i=1;i<ans.size()-1;i++)
        {
            res=res+ans[i];
        }
        return res;
    }
};



*/

class Solution {
public:
    string pushDominoes(string dominoes) {
        // l is the left pointer
        int l = 0, n = dominoes.size();
        // r is the right pointer
        for (int r = 0; r < n; r++) {
            if (dominoes[r] == '.') {
                // case 1. meeting `.`, then skip it
                continue;
            } else if ((dominoes[r] == dominoes[l]) || (dominoes[l] == '.' && dominoes[r] == 'L')) {
                // case 2. both end is equal, i.e. dominoes[r] == dominoes[l]
                // then fill all the dots between both end 
                // e.g. L....L -> LLLLLL
                // e.g. R....R -> RRRRRR
                // case 2.1 if the left end is . and the right end is L, 
                // i.e. dominoes[l] == '.' && dominoes[r] == 'L'
                // then we need to fill them from `l` to `r` in this case
                for (int k = l; k < r; k++) dominoes[k] = dominoes[r];
            } else if (dominoes[l] == 'L' && dominoes[r] == 'R') {
                // case 3. left end is L and right end is R
                // e.g. L.....R
                // then do nothing
            }  else if (dominoes[l] == 'R' && dominoes[r] == 'L') {
                // case 4. left end is R and right end is L
                // if we have odd number of dots between them (let's say m dots), 
                // then we can only add (m / 2) Ls and (m / 2) Rs. 
                // p.s `/` here is integer division. e.g. 3 / 2 = 1
                // e.g. R...L -> RR.LL 
                // if we have even number of dots between them (let's say m dots), 
                // then we can only add (m / 2) Ls and (m / 2) Rs. 
                // e.g. R....L -> RRRLLL
                int m = (r - l - 1) / 2;
                for (int k = 1; k <= m; k++) dominoes[r - k] = 'L', dominoes[l + k] = 'R';
            }
            // update left pointer
            l = r;
        }
        // case 5. if the left dominoe is `R`, then fill all 'R' till the end
        // e.g. LL.R. -> LL.RR
        if (dominoes[l] == 'R') for (int k = l; k < n; k++) dominoes[k] = 'R';
        return dominoes;
    }
};
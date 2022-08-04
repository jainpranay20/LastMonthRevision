class Solution {
public:
    int candy(vector<int>& ratings) {
        int can=ratings.size(),n=can;
        vector<int> left(n,1);
        vector<int> right(n,1);
        int i=1;
        while(i<=n-1)
        {
            if(ratings[i]>ratings[i-1])
            {
               left[i]=left[i-1]+1; 
            }
            cout<<left[i]<<" ";
            i++;
        }
        cout<<" ";
        int j=n-2;
        while(j>=0)
        {
            if(ratings[j]>ratings[j+1])
            {
               right[j]=right[j+1]+1; 
            }
              cout<<right[j]<<" ";
            j--;
        }
       // reverse(right.begin(),right.end());
        int k=0;int ans=0;
        while(k<n)
        {
            ans=ans+max(left[k],right[k]);
            k++;
        }
        return ans; 
    }
};


/*

 int candy(vector<int>& ratings) {
        int candy=ratings.size(),i=1,n=candy;
        while(i<n)
        {
            if(ratings[i]==ratings[i-1])
            {
                i++;
                continue;
            }
            int slope=0;
            while(ratings[i]>ratings[i-1])
            {
                slope++;
                candy=candy+slope;
                i++;
                if(i==n)
                    return candy;
            }
            int valley=0;
            while(i<n && ratings[i-1]>ratings[i])
            {
                valley++;
                candy=candy+valley;
                i++;
            }
            cout<<candy<<" ";
            
        }
        return candy;
        }
    */
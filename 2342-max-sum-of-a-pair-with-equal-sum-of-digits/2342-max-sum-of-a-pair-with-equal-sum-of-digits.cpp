class Solution {
public:
    
//     int maximumSum(vector<int>& nums) {
//     int n = nums.size();
//     vector<int> v;
//     int ans=-1;
//     vector<pair<int,int>> p;
//     for( int i=0;i<n ;i++){ 
//         int a=0, sum=0;
//         a=nums[i]; 
//          while (a != 0) {
//             sum = sum + a % 10;
//              a = a / 10;
//         }
       
//         v.push_back(sum);
//     }
//     for(int i=0 ;i<n;i++){
//         p.push_back(make_pair(v[i], nums[i]));
//     }
//     sort(p.begin(),p.end());
      
//          for(int i=1;i<n ;i++){
//              if(p[i].first == p[i-1].first){
//                  ans=max(ans,p[i].second+p[i-1].second);
//                  cout<<ans<<" ";
//              }
//          }
//     return ans;

    int sum(int no)
    {
        int b=0;
        while(no)
        {
            int a=no%10;
            no=no/10;
            b=b+a;
        }
        return b;
    }
       int flag=1,ans=-1; 
    int maximumSum(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto i:nums)
        {
            int a=sum(i);
            if(mp[a]!=0)
            {
                int b=mp[a];
                mp[a]=max(b,i);
        
                ans=max(ans,b+i);
                cout<<ans<<" ";
            }
            mp[a]=max(i,mp[a]);
        }
        return ans;
    }
};

/*
unordered_map<int,int> mp;
        for(auto i:nums)
        {
            int a=mp[sum(i)];
            if(mp.find(sum(i))!=mp.end())
            {
                flag=0;
                mp[sum(i)]=a+i;
            }
            mp[sum(i)]=a+i;
        }
        int maxi;
        for(auto i:mp)
        {
            //cout<<i.second<<" ";
            maxi=max(maxi,i.second);
        }
        if(flag)
        return maxi;
        
*/
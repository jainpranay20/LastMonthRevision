class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
    for(int i=left;i<=right;i++){
        int z=0;
        for(int j=0;j<ranges.size();j++){
            if(i>=ranges[j][0] && i<=ranges[j][1]){
                z=1;
                break;
            }
            
        }if(z==0)
                return 0;
    }return 1;
}
};

// for(int i=left;i<=right;i++){
//         int z=0;
//         for(int j=0;j<ranges.size();j++){
//             if(i>=ranges[j][0] && i<=ranges[j][1]){
//                 z=1;
//                 break;
//             }
            
//         }if(z==0)
//                 return 0;
//     }return 1;
// }

/*  

vector<int> ans;
        for(auto i:ranges)
        {
            ans.push_back(i[0]);
            ans.push_back(i[1]);
        }
        auto it = find(ans.begin(), ans.end(), left);
        if(it==ans.end())
            return false;
        for(int i=left;i<=right;i++)
        {
            if(ans[it==left)
            {
                *it=*it+1;
                left=left+1;
                cout<<*it;
            }
            else
                return false;
        }
  
        return true;*/
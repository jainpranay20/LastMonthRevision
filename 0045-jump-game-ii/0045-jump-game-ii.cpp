class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()<=1)
            return 0;
        int ladder=nums[0];
        int stairs=nums[0];
        int jump=1;
        for(int level=1;level<nums.size();level++)
        {
            if(level==nums.size()-1)
                return jump;
            ladder=max(ladder,level+nums[level]);
            stairs--;
            if(stairs==0){
                jump++;
            stairs=ladder-level;
        }}
          return jump;
    }
  };

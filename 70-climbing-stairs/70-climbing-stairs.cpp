// class Solution {
// public:
//     int climbStairs(int n) {
//         vector<int> dp(n+1);
//         dp[0] = 1, dp[1] = 1;
//         for(int i=2;i<=n;i++)
//         {
//             dp[i]=dp[i-1]+dp[i-2];
//         }
//         return dp[n];
//     }
// };


class Solution {
public:
    int climbStairs(int n) {
       // vector<int> dp(n+1);
        if(n<2)
            return 1;
        int one = 1, two = 1,third;
        for(int i=2;i<=n;i++)
        {
            int temp = one + two;
            one =two;
            two = temp;
        }
        return two;
    }
};
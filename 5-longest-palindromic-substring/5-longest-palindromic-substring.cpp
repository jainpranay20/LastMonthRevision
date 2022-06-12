class Solution {
public:
    string longestPalindrome(string s) {
        vector<vector<bool>> dp(s.length(), vector<bool>(s.length(), false));
        int begin = 0, length = 1;
        for (int i = 0; i < s.length(); i++) {
            dp[i][i] = true;
            for (int j = i-1; j >= 0; j--) {
				// i  - j == 1 account for palindrome with length 2
                if (s[i] == s[j] && (i - j == 1 || dp[j+1][i-1])) {
                    dp[j][i] = true;
                    int distance = i - j + 1;
                    if (length < distance) {
                        length = distance;;
                        begin = j;
                    }
                }
                else dp[j][i] = false;
                }
        }
        return s.substr(begin, length);
    }
};
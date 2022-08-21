class Solution {
public:
    bool isPalindrome(int n) {
        if(n<0)
            return false;
        long long int rev=0;
        long long int num1=n;
        while(n)
        {
            long long int num=n%10;
            n=n/10;
            rev=rev*10+num;
        }
        return rev==num1;
    }
};
class Solution {
public:
    int reverse(int x) {
        int flag=0;
        long int rev=0;
        while(x)
        {
            int num=x%10;
            x=x/10;
            rev=rev*10+num;
        }
        if(rev<=INT_MIN || rev>=INT_MAX)
            return 0;
        
        return rev;
        
        //return flag==0?reverse:(-1*reverse);
        
    }
};
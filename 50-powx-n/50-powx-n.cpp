class Solution {
public:
    //O(logn) approach
    double helper(double x, int n)
    {
        if(n==0)
           return 1;
        double temp=helper(x,n/2);
        temp*=temp;
        if(n%2==0)
            return temp;
        else return x*temp*1.0;
    }
    double myPow(double x, int n) {
       if(n==0) return 1;
        if(n>0) return helper(x,n);
        else return 1.0/helper(x,n);
    }
};
 
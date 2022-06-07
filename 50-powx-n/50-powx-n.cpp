class Solution
{
    public:
       	//O(logn) approach
        double helper(double x, int n)
        {
            if (n == 0)
                return 1;
            double temp = helper(x, n / 2);
            temp *= temp;
            if (n % 2 == 0)
                return temp;
            else return x *temp *1.0;
        }
    double myPow(double x, int n)
    {
        if (n == 0) return 1;
        if (n > 0) return helper(x, n);
        else return 1.0 / helper(x, n);
    }

   	//  TLE
   	//             if(n>=0){
   	//                 double ans = 1;
   	//                 for (int i = 0; i < n; i++)
   	//                     ans = ans * x;
   	//             return ans;
   	//             }
   	//             else 
   	//             {
   	//                 double ans=1;
   	//                 for (int i = 0; i < abs(n); i++)
   	//                 ans=(1/x)*ans;
   	//                 return ans;
   	//             }
   	//         }

   	//  TLE
   	//             double myPow(double x, int n)
   	//         {

   	// if (n == 0)
   	//     return 1;
   	// if (n < 0)
   	// {
   	//     n = -n;
   	//     x = 1 / x;
   	// }
   	// return (n % 2 == 0) ? pow(x *x, n / 2) : x* pow(x *x, n / 2);
};
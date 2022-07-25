class Solution {
public:
    bool isPerfectSquare(int num) {
        int a=sqrt(num);
        if(a*a==num)
            return true;
        else
            return false;
    }
//         if(num==0)return 0;
//         int low=1,high=num,mid;
//         while(low<=high)
//         {
                  
//             mid=(low+high)/2;
//             if(mid*mid==num)
//                 return true;
//             if(mid<num/mid)
//                  low=mid+1;
//             else if(mid>num/mid)
//                high=mid-1; 
//         }
//         return false;
//     }
};
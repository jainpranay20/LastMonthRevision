class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0){
			return false;
		}
        if((n&(n-1))!=0)
            return false;
        else
        {
            cout<<n;
            
            while((n&1)==0)
            {
                 //cout<<n;
                if(n&1==1)
                    return false;
                n=n>>1;
               
                if(n&1==1)
                    return false;
                n=n>>1; 
                cout<<n;
            }
            if(n&1==1)
                return true;
        }
        return false;
    }
};
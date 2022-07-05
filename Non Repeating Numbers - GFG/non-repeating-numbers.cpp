// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
    int xxory = 0;
       for(int i=0;i<nums.size();i++)
           xxory^=nums[i];
       
       int rmm = xxory & -xxory;
       
       int x = 0;
       int y = 0;
       for(int i=0;i<nums.size();i++){
           if(rmm&nums[i])
               x^=nums[i];
           else
               y^=nums[i];
       }
       if(x>y)
           return {y,x};
       return {x,y};
       
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends
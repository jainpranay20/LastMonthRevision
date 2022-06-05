// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long  mergeall(long long arr[],int left,int mid,int right,long long temp[]){
       int i=left,j=mid,k=left;long long count=0;
       while(i<=mid-1 && j<=right)
       {
           if(arr[i]<=arr[j])
           temp[k++]=arr[i++];
           else{
               temp[k++]=arr[j++];
               count=count+mid-i;
           }
       }
       while(i<=mid-1)
       {
           temp[k++]=arr[i++];
       }
       while(j<=right)
       {
           temp[k++]=arr[j++];
       }
       for(int i=left;i<=right;i++)
       arr[i]=temp[i];
        return count;
    }
    long long  merge(long long arr[],int left,int right,long long temp[])
    {
        long long  count=0;
        if(right>left)
        {
        int mid=(left+right)/2;
        count+=merge(arr,left,mid,temp);
        count+=merge(arr,mid+1,right,temp);
        count=count+mergeall(arr,left,mid+1,right,temp);
        }
        return count;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        int left=0,right=N-1;
        long long temp[N];
        long long  int a=merge(arr,left,right,temp);
        return a;
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends
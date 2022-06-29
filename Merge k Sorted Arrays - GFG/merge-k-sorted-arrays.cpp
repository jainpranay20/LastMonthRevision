// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
#define N 105
using namespace std;
void printArray(vector<int> arr, int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}


 // } Driver Code Ends
//User function Template for C++


#include<queue>

class Solution
{
    public:
    
    class node
    {
        public:
        int data,i,j;
        node(int data,int row ,int col)
        {
            this->data=data;
            i=row;
            j=col;
        }
        
        //comparator for sorting in queue
     
    };
    
    class compare
    {
        public:
        bool operator()(node* a,node* b)
        {
            return a->data>b->data;
        }
    };
    
    vector<int> mergeKArrays(vector<vector<int>> arr, int k)
    {
        //creating a min heap which will stores node * type imformation for a block in 2d matrixd formed by k arrays
        priority_queue<node* ,vector<node*>,compare> pq;
        //initially storing imformation about all the first element of k arrays in the min heap
        for(int i=0;i<k;i++)
        {
            node* tmp=new node(arr[i][0],i,0);
            pq.push(tmp);
        }
        //min heap top will contain the node* whose data is min
        vector<int> ans;
        while(pq.size()>0)
        {
            node * tmp=pq.top();
            pq.pop();
            ans.push_back(tmp->data);
            int row=tmp->i;
            int col=tmp->j;
            if(col+1<arr[row].size())
            {
                node *newnode=new node(arr[row][col+1],row,col+1);
                pq.push(newnode);
            }
            
        }
        return ans;
         
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    vector<vector<int>> arr(k, vector<int> (k, 0));
	    for(int i=0; i<k; i++){
	        for(int j=0; j<k; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    Solution obj;
    	vector<int> output = obj.mergeKArrays(arr, k);
    	printArray(output, k*k);
    	cout<<endl;
    }
	return 0;
}





  // } Driver Code Ends
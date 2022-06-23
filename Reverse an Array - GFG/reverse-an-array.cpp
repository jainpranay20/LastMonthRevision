#include <bits/stdc++.h>
using namespace std;
void reverse(vector<int> &v, int n){
   int low =0;
   int high = n-1;
   while(low<=high){
       swap(v[low], v[high]);
       low++;
       high--;
   }
   
}
int main() {
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v (n);
    for(int i =0; i<n;i++) cin>>v[i];
    reverse(v,n);
    for(auto it1 : v) cout<<it1<<" ";
    cout<<endl;
}
return 0;
}
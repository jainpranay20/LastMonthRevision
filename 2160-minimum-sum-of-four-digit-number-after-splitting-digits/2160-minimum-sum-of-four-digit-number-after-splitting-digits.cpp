#include<bits/stdc++.h>
class Solution {
public:
    int minimumSum(int num) {
        string str=to_string(num);
        sort(str.begin(),str.end());
        int a=str[0]-48;
        int b=str[1]-48;
        int c=str[2]-48;
        int d=str[3]-48;
        int e=(a*10+c)+(b*10+d);
        cout<<e;
       
        return e;
    }
};
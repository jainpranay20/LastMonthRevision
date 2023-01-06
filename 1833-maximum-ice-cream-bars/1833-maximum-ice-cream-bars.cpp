class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        long int i=0;
        while(i<costs.size() and costs[i]<=coins)
        {
            coins=coins-costs[i];
            i++;
        }
        return i;
    }
};
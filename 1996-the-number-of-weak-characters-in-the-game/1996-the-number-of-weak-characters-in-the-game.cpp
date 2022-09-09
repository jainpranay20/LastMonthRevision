class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& p) {
        int weakCharacters = 0;
        int maxDefense = 0;
        map<int, vector<int>, greater<int>> m;
        for(auto x : p) m[x[0]].push_back(x[1]);
        for(auto x : m) {
            weakCharacters += count_if(x.second.begin(), x.second.end(), [&](int curDefense){ return curDefense < maxDefense;});
            maxDefense = max(maxDefense, *max_element(x.second.begin(), x.second.end()));
        }
        return weakCharacters;
    }
};
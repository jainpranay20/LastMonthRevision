class Solution
{
    public:
        vector<vector < string>> findDuplicate(vector<string> &paths)
        {
            vector<vector < string>> ans;
            unordered_map<string, vector < string>> mp;
            for (auto path: paths)
            {
                int i = 0;
                int n = path.size();
                string dir = "";
                while (i < n and path[i] != ' ')
                {
                    dir = dir + path[i];
                    i++;
                }
                dir = dir+'/';
                i++;
                while (i < n)
                {
                    string file = "";
                    string content = "";
                    while (path[i] != '(')
                    {
                        file = file + path[i];
                        i++;
                    }
                    i++;
                    while (path[i] != ')')
                    {
                        content = content + path[i];
                        i++;
                    }
                    i++;
                    i++;
                    mp[content].push_back(dir + file);
                }
            }
            for (auto it: mp)
            {
                if (it.second.size() > 1)
                {
                    ans.push_back(it.second);
                }
            }
            return ans;
        }
};
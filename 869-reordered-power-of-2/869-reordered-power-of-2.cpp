class Solution
{
    public:
        bool reorderedPowerOf2(int n)
        {
            string x = to_string(n);
            sort(x.begin(), x.end());

            if (x[0] != '0')
            {
                int n1 = stoi(x);
                if (!(n1 &(n1 - 1))) return true;
            }
            while (next_permutation(x.begin(), x.end()))
            {
                if (x[0] == '0') continue;
                int n1 = stoi(x);
                if (!(n1 &(n1 - 1))) return true;
            }
            return false;
        }
};
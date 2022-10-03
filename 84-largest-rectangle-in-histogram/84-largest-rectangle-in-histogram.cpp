class Solution
{
    public:
        int largestRectangleArea(vector<int> &heights)
        {
            int n = heights.size();
            vector<int> left(n, 0);
            vector<int> right(n, n);
            stack<int> s;
            for (int i = 0; i < n; i++)
            {
                while (!s.empty() and heights[i] <= heights[s.top()])
                {
                    s.pop();
                }
                if (s.empty())
                {
                    left[i] = 0;
                }
                else
                    left[i] = s.top() + 1;

                s.push(i);
            }
            // for(auto i:left)
            // {
            //     cout<<i<<" ";
            // }
            // for example suppose 2 1 5 6 2 3 --- 00232
            while (!s.empty())
                s.pop();
            for (int i = n - 1; i >= 0; i--)
            {
                while (!s.empty() && heights[i] <= heights[s.top()])
                    s.pop();
                if (s.empty())
                    right[i] = n - 1;	//minimum element
                else right[i] = s.top() - 1;
                s.push(i);
            }
            int max_area = 0;
            for (int i = 0; i < n; i++)
            {
                max_area = max(max_area, heights[i] *(right[i] - left[i] + 1));
            }
            return max_area;
        }
};
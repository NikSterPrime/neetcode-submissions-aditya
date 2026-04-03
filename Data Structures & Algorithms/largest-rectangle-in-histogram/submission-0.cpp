class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int maxArea = 0;
        stack<pair<int,int>> mystack;

        for(int i=0;i<heights.size();i++)
        {
            int start = i;
            while(!mystack.empty() && mystack.top().second > heights[i])
            {
                int index = mystack.top().first;
                int height = mystack.top().second;
                maxArea = max(maxArea, height*(i - index));
                start = index;
                mystack.pop();
            }
            mystack.push({start,heights[i]});
        }
        while(!mystack.empty())
        {
            int index = mystack.top().first;
            int height = mystack.top().second;
            maxArea = max(maxArea, height*(static_cast<int>(heights.size())-index));
            mystack.pop();
        }
        return maxArea;
    }
};

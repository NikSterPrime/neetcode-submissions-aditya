class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size() - 1;
        int max_water = 0;
        if(heights.size()>2)
        {
        while(i<j)
        {
            max_water = max(abs(j-i)*min(heights[j],heights[i]),max_water);
            if(heights[i]<heights[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        }
        else
        {
            if(heights[i]==0||heights[j]==0)
            return 0;
            else if(heights[i]==heights[j])
            return heights[i];
            max_water = abs(heights[i]-heights[j]);
        }
        return max_water;
    }
};

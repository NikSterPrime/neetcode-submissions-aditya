class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector <int> n;
        for(int i=0;i<numbers.size();i++)
        {
            for(int j=numbers.size()-1;j>=0;j--)
            {
                if(i<j)
                {
                    if(numbers[i]+numbers[j] == target)
                    {
                        n.push_back(i+1);
                        n.push_back(j+1);
                        return n;
                    }

                }
            }
        }
    }
};

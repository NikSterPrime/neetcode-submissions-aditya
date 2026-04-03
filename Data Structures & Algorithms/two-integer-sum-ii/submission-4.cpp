class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector <int> n;
        int i = 0;
        int j = numbers.size()-1;
        while(i<j)
        {
            int sum = numbers[i] + numbers[j]; 
            if(sum == target)
            {
                n.push_back(i+1);
                n.push_back(j+1);
                return n;
            }
            else if(sum<target)
            i++;
            else
            j--;
            
        }

    }
};

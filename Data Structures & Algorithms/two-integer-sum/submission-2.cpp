class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // try to find target - nums[i] is present in the array ?
        vector<int> ans;
        int i = 0;
        int j = nums.size()-1;
        while(i<j)
        {
            int answer = abs(nums[i]+nums[j]);
            cout<<answer<<endl;
            cout<<abs(target)<<endl;
            if(answer==abs(target))
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
            else if(answer>abs(target)) j--;
            else i++;
        }
        return ans;
    }
};

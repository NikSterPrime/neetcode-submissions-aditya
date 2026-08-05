class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> count_map;
        for(int i=0;i<nums.size();i++)
        {
            if(count_map.find(nums[i]) != count_map.end())
            return true;

            count_map[nums[i]] = 1;
        }
        return false;
    }
};
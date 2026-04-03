class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());  // Step 1: sort array

        for (int k = 0; k < nums.size(); k++) {
            // Skip duplicate `k`
            if (k > 0 && nums[k] == nums[k - 1]) continue;

            int target = -nums[k];
            int i = k + 1, j = nums.size() - 1;

            while (i < j) {
                int sum = nums[i] + nums[j];

                if (sum == target) {
                    result.push_back({nums[k], nums[i], nums[j]});

                    // Skip duplicates for `i` and `j`
                    while (i < j && nums[i] == nums[i + 1]) i++;
                    while (i < j && nums[j] == nums[j - 1]) j--;

                    i++;
                    j--;
                }
                else if (sum < target) {
                    i++;
                }
                else {
                    j--;
                }
            }
        }
        return result;
    }
};

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> sets (nums.begin(),nums.end());
        int longest = 0;
        for( int num:sets)
        {
            if(sets.find(num-1)== sets.end())
            {
                int length =1;
                while(sets.find(num+length) != sets.end())
                {
                    length++;
                }
                longest = max(longest,length);
            }
        }
        return longest;
        
    }
};

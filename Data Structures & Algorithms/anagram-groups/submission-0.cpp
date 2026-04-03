class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> group;
        std::unordered_map<std::string,std::vector<std::string>> map;
        for(string s:strs)
        {
            string key = s;
            sort(key.begin(),key.end());
            map[key].push_back(s);
        }
        for(auto &i:map)
        {
            group.push_back(i.second);
        }
        return group;
    }
};

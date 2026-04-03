class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())
        return false;
        sort(s1.begin(),s1.end());
        int countfreq =0;
        unordered_map<char,int> counter;
        for(char c:s1)
        {
            counter[c]++;
        }
        int r =0;
        for(int l=0;l<s2.size();l++)
        {
            if(counter.find(s2[l])!=counter.end())
            {
                string newString = s2.substr(l,s1.size());
                sort(newString.begin(),newString.end());
                if(newString == s1)
                return true;
            }
        }
        return false;
    }
};

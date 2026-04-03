class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string s1 = "";
        int maxLength = 0;
        for(int i=0;i<s.size();i++)
        {
            int n = 0;
            for(int j=i;j<s.size();j++)
            {
                if(s1.find(s[j])==std::string::npos)
                {
                    s1+=s[j];
                    n = s1.size();
                }
                else
                break;
            }
            maxLength = max(maxLength,n);
            s1="";
        }
        
        return maxLength;
    }
};


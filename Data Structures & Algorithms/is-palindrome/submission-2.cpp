class Solution {
public:
    bool isPalindrome(string s) {
        string n;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(char c:s)
        {
            if(!isalnum(c))
            continue;
            n+=c;
        }
        cout<<n;
        int left = 0;
        int right = n.length()-1;
        while(left<right)
        {
            if(n[left] == n[right])
            {
                left++;
                right--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};

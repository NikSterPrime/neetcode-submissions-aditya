class Solution {
public:

    string encode(vector<string>& strs) {
        std::string s;
        for(string str:strs)
        {
            std::string size = to_string(str.size());
            s.append(size);
            s.append("#");
            s.append(str);
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> out;
        int i=0;
        while(i<s.size())
        {
            int j=i;
            while(s[j] != '#')j++;
            int length = stoi(s.substr(i,j-i));
            string word = s.substr(j+1,length);
            out.push_back(word);
            i = j+length+1;
        }
        return out;
    }
};

class Solution {
public:
    int maximum(vector<int> &sub) {
        int max = 0;
        for(int i:sub)
        {
            if(i>max)
            {
                max = i;
            }
        }
        return max;
    }
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        if(nums.size()<3 && k<2)
        return nums;
        int r =k;
        for(int l=0;l<nums.size();l++) {
            if(r>nums.size())
            break;
            vector<int> sub_vector (nums.begin()+l,nums.begin()+r);
            for(int i:sub_vector)
            cout<<i<<", ";
            cout<<"end of vector"<<endl;
            int max = maximum(sub_vector);
            ans.push_back(max);
            r++;
        }

        return ans;
    }
};

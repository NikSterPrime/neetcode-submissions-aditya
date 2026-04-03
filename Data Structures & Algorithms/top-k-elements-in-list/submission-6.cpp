class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        vector<int> out;
        for(int n:nums)
        {
            count[n]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(auto& [num,freq]:count)
        {
            pq.push({freq,num});
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        while(!pq.empty())
        {
            out.push_back(pq.top().second);
            pq.pop();
        }
        return out;
    }
};

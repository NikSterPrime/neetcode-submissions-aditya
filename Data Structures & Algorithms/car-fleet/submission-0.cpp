class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
       std::map<int,int,std::greater<int>> pairs;
       for(int i=0;i<position.size();i++)
        pairs[position[i]] = speed[i];
       vector<float> tracker;
       for(const auto& i:pairs)
       {
        tracker.push_back((float)(target-i.first)/i.second);
        if((tracker.size() >= 2)&& (tracker.back()<=tracker[tracker.size()-2]))
        {
            tracker.pop_back();
        }
       }
       return tracker.size();
    }
};

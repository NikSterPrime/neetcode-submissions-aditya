class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        for(int i:nums2)
        nums1.push_back(i);

        sort(nums1.begin(),nums1.end());
        for(int i:nums1)
        cout<<i<<endl;
        if(nums1.size()%2!=0)
        {
            int mid = (0+(nums1.size()-1))/2;
            return nums1[mid];
        }
        else
        {
            int low = 0;
            int high = nums1.size()-1;
            int mid = (low+high)/2;
            int midplus = mid + 1;
            cout<<nums1[mid]<<" "<<mid<<endl;;
            cout<<nums1[midplus]<<" "<<midplus<<endl;
            double result = (double)(nums1[mid]+nums1[midplus])/2;
            cout<<result<<endl;
            return result;
        }

        return 0;
    }
};

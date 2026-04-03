class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++)
        {
            int low = 0;
            int high = matrix[i].size()-1;
            if((target>=matrix[i][low])&&(target<=matrix[i][high]))
            {
                cout<<high<<endl;
                while(low<=high)
                {
                    int mid;
                    mid = (low+high)/2;

                    if(target == matrix[i][mid])
                    return true;

                    else if(target < matrix[i][mid])
                    high = mid - 1;

                    else
                    low = mid + 1;
                }
            }
        }
        return false;
    }
};

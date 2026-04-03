class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       std::vector<std::unordered_set<char>> rows(9);
    std::vector<std::unordered_set<char>> cols(9);
    std::vector<std::unordered_set<char>> boxes(9);

    for (int r = 0; r < 9; ++r) {
        for (int c = 0; c < 9; ++c) {
            char val = board[r][c];
            if (val == '.') {
                continue;
            }

            // Check row
            if (rows[r].count(val)) {
                return false;
            }
            rows[r].insert(val);

            // Check column
            if (cols[c].count(val)) {
                return false;
            }
            cols[c].insert(val);

            // Check 3x3 sub-box
            int box_idx = (r / 3) * 3 + (c / 3);
            if (boxes[box_idx].count(val)) {
                return false;
            }
            boxes[box_idx].insert(val);
        }
    }

    return true; 
    }
};

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> b(rowIndex+1);
        for (int i = 0; i < rowIndex+1; i++) {
            b[i].resize(i + 1, 1); 
            for (int j = 1; j < i; j++) {
                b[i][j] = b[i-1][j-1] + b[i-1][j];
            }
        }
        return b[rowIndex];
    }
};
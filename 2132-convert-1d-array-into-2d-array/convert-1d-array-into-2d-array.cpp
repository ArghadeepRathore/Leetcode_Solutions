class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> v(m, vector<int>(n));
        int x = 0;
        if (m * n == original.size()) {
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    v[i][j] = original[x++];
                }
            }
            return v;
        }
        return {};
    }
};
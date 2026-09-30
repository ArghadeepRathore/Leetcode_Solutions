class Solution {
public:
    int m, n;

    void dfs(vector<vector<char>>& grid, int i, int j) {
        // boundary check
        if (i < 0 || i >= m || j < 0 || j >= n)
            return;

        // water or already visited
        if (grid[i][j] == '0')
            return;

        // mark visited
        grid[i][j] = '0';

        // up
        dfs(grid, i - 1, j);

        // down
        dfs(grid, i + 1, j);

        // left
        dfs(grid, i, j - 1);

        // right
        dfs(grid, i, j + 1);
    }

    int numIslands(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();

        int count = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (grid[i][j] == '1') {
                    count++;

                    dfs(grid, i, j);
                }
            }
        }

        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
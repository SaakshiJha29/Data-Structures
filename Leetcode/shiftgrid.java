import java.util.*;

class Solution {
    public List<List<Integer>> shiftGrid(int[][] grid, int k) {
        int m = grid.length, n = grid[0].length;
        int total = m * n;

        k %= total;

        int[][] temp = new int[m][n];

        for (int i = 0; i < total; i++) {
            int newIdx = (i + k) % total;

            temp[newIdx / n][newIdx % n] = grid[i / n][i % n];
        }

        // Convert to List<List<Integer>>
        List<List<Integer>> res = new ArrayList<>(m);
        for (int i = 0; i < m; i++) {
            List<Integer> row = new ArrayList<>(n);
            for (int j = 0; j < n; j++) {
                row.add(temp[i][j]);
            }
            res.add(row);
        }

        return res;
    }
}
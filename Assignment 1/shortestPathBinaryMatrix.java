public int shortestPathBinaryMatrix(int[][] grid) {
        Queue<Integer> q = new LinkedList<>();
        if (grid[0][0] == 0) 
                q.offer(0);
        int n = grid.length;
        for (int steps = 1; !q.isEmpty(); ++steps) { 
            for (int sz = q.size(); sz > 0; --sz) {
                int x = q.peek() / n, y = q.poll() % n;
                if (x == n - 1 && y == n - 1) 
                    return steps;
                for (int i = x - 1; i <= x + 1; ++i) {  
                    for (int j = y - 1; j <= y + 1; ++j) { 
                        if (i >= 0 && i < n && j >= 0 && j < n && grid[i][j] == 0) {
                            q.offer(i * n + j); 
                            grid[i][j] = -1;
                        }
                    }
                }
            }
        }
        return -1;
    }
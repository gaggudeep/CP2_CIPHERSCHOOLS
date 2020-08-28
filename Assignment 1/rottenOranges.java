class Solution {
    public int orangesRotting(int[][] grid) {
        if(grid.length == 0)
            return 0;
        int fresh = 0;
        Queue<int[]> q = new LinkedList<>();
        for(int i = 0 ; i < grid.length ; i++)
        {
            for(int j = 0 ; j < grid[0].length ; j++)
            {
                if(grid[i][j] == 2)
                {
                   q.add(new int[]{i, j}); 
                }
                else if(grid[i][j] == 1)
                    fresh++;
            }
        }
        if(fresh == 0)
            return 0;
        int mins = 0;
        int dirs[][] = {{0, -1}, {-1, 0}, {0, 1}, {1, 0}};
        while(!q.isEmpty())
        {
            int size = q.size();
            for(int k = 0 ; k < size ; k++)
            {
                int pt[] = q.remove();
                int i = pt[0], j = pt[1];
                for(int dir[] : dirs)
                {
                    int x = i + dir[0];
                    int y = j + dir[1];
                    if(x < 0 || y < 0 || x >= grid.length || y >= grid[0].length || grid[x][y] == 0 || grid[x][y] == 2)
                        continue;
                    grid[x][y] = 2;
                    q.add(new int[]{x, y});
                    fresh--;
            }
            }
            if(!q.isEmpty())
                mins++;
        }
        return fresh == 0 ? mins : - 1;
    }
}
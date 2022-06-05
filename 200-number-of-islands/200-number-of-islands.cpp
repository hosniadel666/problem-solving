class Solution {
public:
    /*
    i need to count the number of connected commponents 
    i used DFS algorithmin all directions starting from
    a land "1" and mark all the visited lands.
    complexity of this is O(map_size) = O(rows*columns)
    */
    void dfs(vector<vector<char>>& grid, int x, int y) {
        if(
           x < 0 || y < 0 ||
           x >= grid.size() ||
           y >= grid[0].size() ||
           grid[x][y] == '0'
          )
            return;
        if(grid[x][y] == '1')
            grid[x][y] = '0';
        dfs(grid, x + 1, y);
        dfs(grid, x - 1, y);
        dfs(grid, x, y + 1);
        dfs(grid, x, y - 1);
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int islands_nums = 0;
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j <grid[0].size(); j++) {
                if(grid[i][j] == '1') {
                    dfs(grid, i, j);
                    islands_nums++;
                }
                
            }
        }
        return islands_nums;
    }
    
};
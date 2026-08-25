class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size() , m = grid[0].size();
        vector<int> dx = {1 , -1 , 0 , 0};
        vector<int> dy = {0 , 0 , 1 , -1};

        queue<pair<int , int>> q;
        int rottenOranges = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 2){
                    q.push({i , j});
                }
                else if(grid[i][j] == 1){
                   rottenOranges++;
                }
            }
        }
        
        int mins = 0;
        while(!q.empty()){
            if(rottenOranges == 0){
                break;
            }
            mins++;

            int sz = q.size();
            for(int i=0; i<sz; i++){
                auto [x , y] = q.front();
                q.pop();

                for(int k=0; k<4; k++){
                    int X = x + dx[k];
                    int Y = y + dy[k];
                
                if(X >= 0 && Y >= 0 && X < n && Y < m && grid[X][Y] == 1){
                   rottenOranges--;
                   q.push({X , Y});
                   grid[X][Y] = 2;
                  }
               }
            }
        }
        return ((rottenOranges > 0) ? -1 : mins);
    }
};
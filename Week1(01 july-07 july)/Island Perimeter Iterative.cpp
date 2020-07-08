class Solution {
public:

    int islandPerimeter(vector<vector<int>>& grid) {
        ios_base::sync_with_stdio(0);cin.tie(0);
        int pre=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                {
                    if(i==0||(i>0&&grid[i-1][j]==0))
                        pre++;
                    if(i==grid.size()-1||(i+1<grid.size()&&grid[i+1][j]==0))
                        pre++;
                    if(j==0||(j>0&&grid[i][j-1]==0))
                        pre++;
                    if(j==grid[0].size()-1||(j+1<grid[0].size()&&grid[i][j+1]==0))
                        pre++;
                }
            }
        }
    return pre;
    }
};

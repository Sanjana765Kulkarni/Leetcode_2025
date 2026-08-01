// Last updated: 01/08/2026, 23:21:08
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initialColor = image [sr][sc];

        if ( initialColor == color ) return image;

        int rows = image.size();
        int cols = image[0].size();

        queue <pair<int,int>> q;

        q.push ({sr,sc});
        image[sr][sc] = color;

        
        int dr[] = {-1,1,0,0};
        int dc[] = {0,0,-1,1};

        while(!q.empty())
        {
            pair<int,int> curr = q.front();
            q.pop();

            for ( int i =0; i< 4; i++)
            {
                int nr = curr.first + dr[i];
                int nc = curr.second + dc[i];

                if( nr >= 0 && nr < rows && nc>=0 && nc < cols && image [nr][nc]== initialColor)
                {
                    image[nr][nc]=color;
                    q.push({nr,nc}); 
                }
            }
        }


        return image;


    }
};
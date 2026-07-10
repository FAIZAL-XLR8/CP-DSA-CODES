// Same question of Flood Fill so Flood Fill answer down  below
class Solution
{
public:
    vector<int> dx = {+1, -1, 0, 0};
    vector<int> dy = {+0, +0, -1, +1};
    bool isValid(int i, int j, vector<vector<int>> &image)
    {
        return i >= 0 and i < image.size() and j >= 0 and j < image[0].size();
    }
    void dfs(int i, int j, vector<vector<int>> &image, int newColor,
             vector<vector<bool>> &isVisited, int present)
    {
        isVisited[i][j] = true;
        image[i][j] = newColor;
        for (int k = 0; k < 4; ++k)
        {
            int ni = i + dx[k], nj = j + dy[k];
            if (isValid(ni, nj, image) and image[ni][nj] == present and !isVisited[ni][nj])
            {
                dfs(ni, nj, image, newColor, isVisited, present);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc,
                                  int newColor)
    {
        // Code here

        int present = image[sr][sc];
        int n = image.size();
        int m = image[0].size();

        vector<vector<bool>> isVisited(n, vector<bool>(m, false));
        dfs(sr, sc, image, newColor, isVisited, present);
        return image;
    }
};
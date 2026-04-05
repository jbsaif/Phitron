#include <bits/stdc++.h>
using namespace std;

int n, m;
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>> moves = {{-1,0}, {1,0}, {0,-1}, {0,1}};

bool is_valid(int i, int j)
{
    if(i<0 || i>=n || j<0 || j>=m)
        return false;
    if(grid[i][j] == '#') 
        return false;
    return true;
}

void dfs(int i, int j)
{
    vis[i][j] = true;
    for(auto mv : moves)
    {
        int ni = i + mv.first;
        int nj = j + mv.second;
        if(is_valid(ni,nj) && !vis[ni][nj])
        {
            dfs(ni,nj);
        }
    }
}

int main()
{
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> grid[i][j];
        }
    }

    memset(vis, false, sizeof(vis));
    int apartments = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(grid[i][j] == '.' && !vis[i][j])
            {
                dfs(i,j);
                apartments++;
            }
        }
    }

    cout << apartments << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int n, m;
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>> moves = {{-1,0}, {1,0}, {0,-1}, {0,1}};
pair<int,int> start, end_;

bool is_valid(int i, int j)
{
    if(i<0 || i>=n || j<0 || j>=m)
        return false;
    if(grid[i][j] == '#') 
        return false;
    return true;
}

bool dfs(int si, int sj)
{
    vis[si][sj] = true;
    if(si == end_.first && sj == end_.second)
        return true;

    for(auto mv : moves)
    {
        int di = si + mv.first;
        int dj = sj + mv.second;
        if(is_valid(di,dj) && !vis[di][dj])
        {
            if(dfs(di,dj))
                return true;
        }
    }
    return false;
}

int main()
{
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> grid[i][j];
            if(grid[i][j] == 'A') 
                start = {i,j};
            if(grid[i][j] == 'B') 
                end_ = {i,j};
        }
    }

    memset(vis, false, sizeof(vis));
    if(dfs(start.first, start.second))
        cout << "YES"<<endl;
    else
        cout << "NO"<<endl;

    return 0;
}
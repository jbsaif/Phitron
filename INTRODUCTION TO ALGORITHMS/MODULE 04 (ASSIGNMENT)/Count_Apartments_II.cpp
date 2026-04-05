#include <bits/stdc++.h>
using namespace std;

int n, m;
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>> moves = {{-1,0}, {1,0}, {0,-1}, {0,1}};

bool is_valid(int i, int j)
{
    if(i<0 || i>=n || j<0 || j>=m) return false;
    if(grid[i][j] == '#') return false;
    return true;
}

int dfs(int i, int j)
{
    vis[i][j] = true;
    int count = 1;
    for(auto mv : moves)
    {
        int ni = i + mv.first;
        int nj = j + mv.second;
        if(is_valid(ni,nj) && !vis[ni][nj])
        {
            count += dfs(ni,nj); 
        }
    }
    return count;
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
    vector<int> apartment_sizes;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(grid[i][j] == '.' && !vis[i][j])
            {
                int size = dfs(i,j);
                apartment_sizes.push_back(size);
            }
        }
    }

    if(apartment_sizes.empty())
    {
        cout << 0 << endl;
    }
    else
    {
        sort(apartment_sizes.begin(), apartment_sizes.end());
        for(int sz : apartment_sizes)
            cout << sz << " ";
        cout << endl;
    }

    return 0;
}
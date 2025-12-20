//Space Complexity
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m; //O(1)
    cin>>n>>m; //O(1)
    int a[n][m]; //O(n)*O(n)
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }
    return 0;
}

// Ei code er space complexity O(n)*O(n) => O(n^2)
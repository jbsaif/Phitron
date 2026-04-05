#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<int> adj_list[n];

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int u, v;
        cin >> u >> v;

        if (u == v)
        {
            cout << "YES\n";
            continue;
        }

        bool found = false;

        for (int child : adj_list[u])
        {
            if (child == v)
            {
                found = true;
                break;
            }
        }

        if (found)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
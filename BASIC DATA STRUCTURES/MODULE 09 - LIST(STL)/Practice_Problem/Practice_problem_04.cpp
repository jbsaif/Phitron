#include <bits/stdc++.h>
using namespace std;
int main()
{

    list<int> l;
    int q;
    cin >> q;
    while (q--)
    {
        int idx, x;
        cin >> idx >> x;
        if (idx < 0 || idx > l.size())
        {
            cout << "Invalid" << endl;
            continue;
        }
        else if (idx == 0)
        {
            l.push_front(x);
        }
        else if (idx == l.size())
        {

            l.push_back(x);
        }

        else
        {
            l.insert(next(l.begin(), idx), x);
        }

        for(int val : l)
        {
            cout<<val<<" ";
        }
        cout<<endl;
        for(auto it = l.rbegin(); it!=l.rend(); it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    return 0;
}
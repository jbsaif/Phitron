#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    list<int> l2;
    while(true)
    {
        int x;
        cin>>x;
        if(x == -1)
        {
            break;
        }
        l.push_back(x);
    }

    while(true)
    {
        int y;
        cin>>y;
        if(y == -1)
        {
            break;
        }
        l2.push_back(y);
    }

    if(l == l2)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
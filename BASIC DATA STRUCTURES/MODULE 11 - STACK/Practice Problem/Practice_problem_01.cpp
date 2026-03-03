#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l1;
    int n;
    cin>>n;
    for(int i=0;  i<n; i++)
    {
        int val;
        cin>>val;
        l1.push_back(val);
    }
    list<int> l2;
    int m;
    cin>>m;
    for(int i=0; i<m; i++)
    {
        int val2;
        cin>>val2;
        l2.push_back(val2);
    }

    bool flag = true;

    while(!l1.empty() && !l2.empty())
    {
        if(l1.back() != l2.back())
        {
            flag = false;
            break;
        }
        l1.pop_back();
        l2.pop_back();
    }
    if(l1.size() != l2.size())
    {
        cout<<"NO"<<endl;
    }
    else{
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
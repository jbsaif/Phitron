#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10,20,30,40,50};
    // cout<<l.max_size()<<endl;
    // l.clear();
    // cout<<l.size()<<endl;
    // if(l.empty())
    // {
    //     cout<<"Empty"<<endl;
    // }
    // else{
    //     for(int val : l)
    //     {
    //         cout<<val<<endl;
    //     }
    // }

    l.resize(7,100);
    for(int val : l)
        {
            cout<<val<<endl;
        }
    
    return 0;
}
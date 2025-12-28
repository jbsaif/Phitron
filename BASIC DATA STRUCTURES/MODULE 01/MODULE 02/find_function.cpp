#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1,2,3,4,5,6,1,2,3,4};
    // auto it = find(v.begin(), v.end(),12221);
    // if(it == v.end())
    // {
    //     cout<<"Not Found"<<endl;
    // }
    // else
    // {
    //     cout<<"Found"<<endl;
    // }
    //vector element access
    cout<<v[4]<<endl;
    // cout<<v[v.size()-1]<<endl;
    cout<<v.back()<<endl;
    // cout<<v[0]<<endl;
    cout<<v.front()<<endl;
    return 0;
}
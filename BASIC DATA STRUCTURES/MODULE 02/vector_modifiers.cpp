#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v = {1,2,3,4,5};
    // vector<int> v2;
    // v2 = v;
    // // for(int i=0; i<v2.size(); i++)
    // // {
    // //     cout<<v2[i]<<" ";
    // // }
    // for(int x: v2)
    // {
    //     cout<<x<<" ";
    // }
    // vector<int> v;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.pop_back();
    // v.pop_back();
    // for(int x: v)
    // {
    //     cout<<x<<endl;
    // }

    // vector<int> v = {1,2,3,4,5};
    // v.insert(v.begin()+3, 100);
    // for(int x: v)
    // {
    //     cout<<x<<endl;
    // }

    vector<int> v = {1,2,3,4};
    vector<int> v2 = {100,200,300};
    // v.insert(v.begin()+2, v2.begin(), v2.end());
    v.erase(v.begin()+1,v.begin()+3);
    for(int x: v)
    {
        cout<<x<<endl;
    }
    return 0;
}
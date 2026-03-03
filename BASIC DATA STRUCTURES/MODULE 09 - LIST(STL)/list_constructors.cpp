#include<bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> l(10,5);
    // cout<<*l.begin()<<endl;

    //list print

    // for(auto it = l.begin(); it!=l.end(); it++)
    // {
    //     cout<<*it<<endl;
    // }

    //Ranged based as list doesnt have any index
    // for(int val : l)
    // {
    //     cout<<val<<endl;
    // }

    // list<int> l = {10,20,30};
    // list copy in list
    // list<int> l2(l);

    // array copy in array
    // int a[] = {10,20,30,40};
    // list<int> l(a, a+4);

    //vector copy in list

    vector<int> v = {10,20,30,40,50};
    list<int> l(v.begin(), v.end());


    for(int val :l)
    {
        cout<<val<<endl;
    }

    return 0;
}
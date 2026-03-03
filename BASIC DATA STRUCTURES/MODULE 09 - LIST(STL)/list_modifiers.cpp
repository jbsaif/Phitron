#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10,20,30,30,50,60,30,80,30,100};
    // list<int> l2;
    // // l2 = l;
    // l2.assign(l.begin(), l.end());

    // l.push_back(40);
    // l.push_front(100);
    // l.pop_back();
    // l.pop_front();
    
    // cout<<*next(l.begin(), 2)<<endl;
    // list<int> l2 = {100,200};

    // l.insert(next(l.begin(), 2), 100);
    // l.insert(next(l.begin(), 2), l2.begin(), l2.end());

    // vector<int> v = {3,4,5};
    // l.insert(next(l.begin(),1), v.begin(), v.end());


    // l.erase(next(l.begin(),4));
    // l.erase(next(l.begin(),1), next(l.begin(),5));

    // replace(l.begin(), l.end(), 30, 0);

    auto it = find(l.begin(), l.end(), 101);

    if(it == l.end())
    {
        cout<<"Not Found"<<endl;
    }
    else
    {
        cout<<"Found"<<endl;
    }

    // for(int val : l)
    // {
    //     cout<<val<<endl;
    // }
    return 0;
}
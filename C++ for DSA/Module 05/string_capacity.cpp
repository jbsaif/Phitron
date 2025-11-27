#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Junaeed Bin Saif";
    cout<<s.size()<<endl;
    cout<<s.max_size()<<endl;
    cout<<s.capacity()<<endl;
    // s.clear();
    // cout<<s.size()<<endl;
    if(s.empty() == true)
    {
        cout<<"Empty"<<endl;
    }
    else{
        cout<<"Not Empty"<<endl;
    }
    cout<<s<<endl;
    // s.resize(20);
    s.resize(20,'x');
    cout<<s<<endl;
    return 0;
}
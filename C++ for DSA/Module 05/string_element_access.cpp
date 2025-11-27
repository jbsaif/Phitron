#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s; //space er age porjonto input ney
    cout<<s[3]<<endl;
    cout<<s.at(4)<<endl;
    cout<<s.front()<<endl;
    cout<<s.back()<<endl;
    cout<<s[s.size()-1]<<endl; //evabeo last character print kora jay
    return 0;
}
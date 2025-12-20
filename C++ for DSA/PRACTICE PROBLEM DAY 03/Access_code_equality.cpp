#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string code = "WECNITK";
    if(s==code)
    {
        cout<<"Welcome to Web Club!"<<endl;
    }
    else{
        cout<<"Access denied"<<endl;
    }
    return 0;
}
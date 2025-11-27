#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int length = str.size();
        if(length<=10)
        {
            cout<<str<<endl;
        }else{
            int res = length - 2;
            cout<<str.front()<<res<<str.back()<<endl;
        }
    }
    
    return 0;
}
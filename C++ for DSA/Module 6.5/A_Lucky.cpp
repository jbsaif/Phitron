#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int first = 0;
        int sec = 0;
        // cout<<*(s.begin())<<endl;
        for(int i=0; i<3; i++)
        {
            first+=s[i]-48;
        }

        for(int i=3; i<6; i++)
        {
            sec+=s[i]-48;
        }

        if(first == sec)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    
    return 0;
}
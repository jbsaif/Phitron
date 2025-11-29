#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    // for(int i=0; i<s.size(); i++)
    // {
    //     if(s[i]=='E' && s[i+1] == 'G' && s[i+2] == 'Y' && s[i+3]=='p' && s[i+4] == 'T')
    //     {
    //         cout<<" ";
    //         i+=4;
    //     }
    //     else{
    //         cout<<s[i];
    //         i++;
    //     }
    // }
    int idx = s.find("EGYPT");
    while(idx!=-1)
    {
        s.replace(idx, 5, " ");
        idx = s.find("EGYPT", idx+1);
    }

    cout<<s<<endl;
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char str[n+1];

    cin>>str;
    int cntA = 0;
    int cntD = 0;
    int length = strlen(str);
    for(int i=0; i<length; i++)
    {
        if(str[i]=='A')
        {
            cntA++;
        }
        else if(str[i]=='D')
        {
            cntD++;
        }
    }
    if(cntA>cntD)
    {
        cout<<"Anton"<<endl;
    }else if(cntD>cntA)
    {
        cout<<"Danik"<<endl;
    }else if(cntA==cntD)
    {
        cout<<"Friendship"<<endl;
    }
    return 0;
}
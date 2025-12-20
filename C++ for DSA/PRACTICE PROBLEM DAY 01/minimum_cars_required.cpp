#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        double ans = (double)n/4;
        if(n%2==0 && n<=4)
        {
            cout<<"1"<<endl;
        }
        else if(n%2!=0 && n<=4)
        {
            cout<<"1"<<endl;
        }
        else if(n%2==0 && n>4)
        {
            cout<<ceil(ans)<<endl;
        }
        else if(n%2!=0 && n>4)
        {
            cout<<ceil(ans)<<endl;
        }
        
        
    }
    return 0;
}
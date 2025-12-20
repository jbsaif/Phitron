#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        int z = x*2;
        if(z>y)
        {
            cout<<n*x<<endl;
        }
        else if(z==y)
        {
            cout<<n*x<<endl;
        }
        else if(z<y)
        {
            if(n%2==0)
            {
                cout<<(n/2)*y<<endl;
            }
            else
            {
                cout<<(n/2)*y + x <<endl;
            }
        }
    }
    return 0;
}
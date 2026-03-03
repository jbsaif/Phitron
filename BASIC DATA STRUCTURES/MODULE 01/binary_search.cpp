#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    bool flag = false;
    for(int i=0; i<q; i++)
    {
        int x;
        cin>>x;
        for(int i=0; i<n; i++)
        {
            if(a[i]==x)
            {
                flag = true;
            }
        }
        if(flag == true)
        {
            cout<<"found"<<endl;
        }
        else{
            cout<<"not found"<<endl;
        }
        flag = false;
    }
    return 0;
}
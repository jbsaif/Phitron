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
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int total_room = 0;
        for(int i=0; i<n; i++)
        {
            int ans = ceil((double)a[i]/2);
            total_room+=ans;
        }
        cout<<total_room<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v1(n);
    vector<int> v2(n);
    for(int i=0; i<n; i++)
    {
        cin>>v1[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>v2[i];
    }
    // v2.assign(v1.begin(),v1.end());
    // v2 = v1;
    for(int i=0; i<n; i++)
    {
        cout<<v2[i]<<" ";
    }
    for(int i=0; i<n; i++)
    {
        cout<<v1[i]<<" ";
    }
    return 0;
}
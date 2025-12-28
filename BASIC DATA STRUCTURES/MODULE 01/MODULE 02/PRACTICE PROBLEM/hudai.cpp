#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    vector<int> v2 = {1,2,3,4};
    // v.assign(v2);
    v.insert(v.end(), v2.begin(),v2.end());
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
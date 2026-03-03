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
    
    vector<int> ans;
    ans.insert(ans.end(), v2.begin(), v2.end());
    ans.insert(ans.end(), v1.begin(), v1.end());
    
    for(int x: ans)
    {
        cout<<x<<" ";
    }
    return 0;
}
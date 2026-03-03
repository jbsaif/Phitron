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
    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(v[j] == v[i]+1)
            {
                cnt++;
                break;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
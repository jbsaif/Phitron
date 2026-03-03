#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<long long int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    vector<long long int> presum(n);

    presum[0] = v[0];

    for(int i=1; i<n; i++)
    {
        presum[i] = presum[i-1] + v[i];
    }

    reverse(presum.begin(), presum.end());

    for(int i=0; i<n; i++)
    {
        cout<<presum[i]<<" ";
    }

    return 0;
}
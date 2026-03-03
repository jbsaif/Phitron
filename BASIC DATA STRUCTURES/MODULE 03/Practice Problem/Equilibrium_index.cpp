#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n+1);

    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
    }

    vector<int> prefix_sum(n+1);
    for(int i=2; i<=n; i++)
    {
        prefix_sum[i] = prefix_sum[i-1] + v[i];
    }
    int total_sum = prefix_sum[n-1];
    for(int i=1; i<=n; i++)
    {
        int l;
        int r;
        if(i==1)
        {
            l = 0;
        }else
        {
            l = prefix_sum[i-1];
        }
        r = total_sum - prefix_sum[i];
        if(l==r)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
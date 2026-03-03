#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int sum = 0;
    // using loop
    // for(int i=0; i<=n; i++) O(n)
    // {
    //     sum+=i;
    // }
    //using loop
    sum = (n*(n+1))/2; //O(1)
    cout<<sum<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,k;
    cin>>a>>b>>k;
    long long int from_a = min(a,k);
    a-=from_a;
    k-=from_a;

    long long int from_b = min(b,k);
    b-=from_b;
    k-=from_b;

    cout<<a<<" "<<b<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    cin>>a>>b;
    long long int res =  a/b;
    if(a%b!=0)
    {
        res++;
    }
    cout<<res;
    return 0;
}
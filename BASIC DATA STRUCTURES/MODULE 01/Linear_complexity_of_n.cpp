#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; //O(1)
    cin>>n; //O(1)
    for(int i=1; i<=n; i+=2) //O(n/2)=O(n)
    {
        cout<<i<<" ";
    }
    cout<<endl; // O(1)
    for(int i=1; i<=n; i++) //O(n)
    {
        cout<<i<<" ";
    }
    return 0; //O(1)
}

/*
    Time Complexity O(4) + O(n) + O(n) = O(4+n+n)
    => O(4+2n)
    => O(2n)
    => O(n)
*/

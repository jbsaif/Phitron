#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int arr[n];
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int cntOdd = 0, cntEven = 0;
        for(i=0; i<n; i++)
        {
            if(arr[i]%2==0)
            {
                cntEven++;
            }
            else if(arr[i]%2!=0)
            {
                cntOdd++;
            }
        }
        int operation = n/2;
        int ans = operation - cntOdd;
        
        if(n%2!=0)
        {
            cout<<"-1"<<endl;
        }
        else{
            cout<<abs(ans)<<endl;
        }
        
    }
    
    return 0;
}
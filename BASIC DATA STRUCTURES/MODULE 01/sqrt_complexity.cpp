#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[50];
    int cnt = 0;
    for(int i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            arr[cnt++] = i;
            if(i!=n/i)
            {
                arr[cnt++] = n/i;
            }
        }
    }

    sort(arr, arr+cnt);
    for(int i=0; i<cnt; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
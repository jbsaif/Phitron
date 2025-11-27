#include <bits/stdc++.h>
using namespace std;

int main()
{
  
  int n;
  cin>>n;
  
  int arr[n];
  for(int i=0;i<n; i++)
  {
    cin>>arr[i];
  }
  
  int mn = INT_MAX;
  int mx = INT_MIN;
  int mn_idx;
  int mx_idx;
  
  for(int i=0; i<n; i++)
  {
    if(mx<arr[i])
    {
      mx = arr[i];
      mx_idx = i;
    }
    if(mn>arr[i])
    {
      mn = arr[i];
      mn_idx = i;
    }
  }
 
 //cout << mx_idx <<" " << mn_idx;
 
  swap(arr[mx_idx], arr[mn_idx]);
  
  for(int i=0; i<n; i++)
  {
    cout<<arr[i]<<" ";
  }
  
  return 0;
}
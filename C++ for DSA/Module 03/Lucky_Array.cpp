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
  
  for(int i=0; i<n; i++)
  {
    mn = min(mn, arr[i]);
  }
 int cnt = 0;
 
  for(int i=0; i<n; i++)
  {
    if(arr[i] == mn)
    {
      cnt++;
    }
  }
  
 if(cnt%2!=0)
{
  cout<<"Lucky\n";
}
else{
  cout<<"Unlucky\n";
}
  
  return 0;
}
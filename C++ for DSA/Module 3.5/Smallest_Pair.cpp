#include <bits/stdc++.h>
using namespace std;

int main() 
{

  int t;
  cin>>t;
  
  while(t--)
  {
    int n;
    cin>>n;
    
    int a[n+1];
    
    for(int i=1; i<=n; i++)
    {
      cin>>a[i];
    }
    
    int mn = INT_MAX;
    int sum=0;
    
    for(int i=1; i<n; i++)
    {
      for(int j=i+1; j<=n; j++)
      {
       sum = a[i]+a[j]+j-i;
       mn = min(mn, sum);
       
      }
    }
    
    cout<<mn<<endl;
    
  }

    
  return 0;
}
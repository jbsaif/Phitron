#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  
  int a[n];
  
  for(int i=0; i<n; i++)
  {
    cin>>a[i];
  }
  
  int is_palindrome = true;
  
  for(int i=0,j=n-1; i<j; i++, j--) 
  {
    if(a[i]!=a[j])
    {
      is_palindrome = false;
      break;
    }
  }
  
  if(is_palindrome == true)
  {
    cout<<"YES" << endl;
  }
  else{
    cout<<"NO"<<endl;
  }
    
  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int n;
   
   cin>> n;
   
   int A[n];
   
   for(int i=0; i<n; i++)
   {
     cin>>A[i];
   }
   
   int maxi = INT_MIN;
   
   for(int i=0; i<n; i++)
   {
     maxi = max(maxi, A[i]);
   }
   
   cout<<maxi<<endl;
  
   return 0;
}
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
   
   for(int i=0,j=n-1; i<j; i++, j--)
   {
     swap(A[i] , A[j]);
   }
   
   for(int i=0; i<n; i++)
   {
     cout<<A[i]<<" ";
   }
  
   return 0;
}
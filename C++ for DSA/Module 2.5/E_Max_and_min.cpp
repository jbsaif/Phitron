#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int x, y, z;
   
   cin >>x>>y>>z;
   
   int small= min({x,y,z});
   int large = max ({x,y,z});
   
   cout<<small<<" "<<large<<endl;
  
   return 0;
}
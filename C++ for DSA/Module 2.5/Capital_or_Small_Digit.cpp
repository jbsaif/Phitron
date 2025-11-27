#include <bits/stdc++.h>
using namespace std;

int main() 
{
   char ch;
   cin>>ch;
   
   if(ch>=65 && ch<=90)
   {
     cout<<"ALPHA\nIS CAPITAL\n";
   }
   else if(ch>=97 && ch<=122)
   {
     cout<<"ALPHA\nIS SMALL\n";
   }
   else if(ch>=48 && ch<=57)
   {
     cout<<"IS DIGIT\n";
   }
  
   return 0;
}
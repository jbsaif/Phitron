#include <iostream>
using namespace std;
int main() 
{
   int x = 10;
   char c = 'A';
   double d = 3.14159;
   
   cin>>x>>c>>d;
   cout<<x<<" "<<c<<" "<<d<<endl;
   
   //typecasting
   
   //char variable to int variable
   
   char ch = 'B';
   //int ascii = ch;
   
   //cout<<ascii<<endl;
   
   cout<<(int)ch<<endl;
   
   int ascii = 90;
   
   cout << (char)ascii <<endl;
   
   
   return 0;
}
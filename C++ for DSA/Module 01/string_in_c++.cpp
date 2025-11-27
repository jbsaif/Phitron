#include <iostream>
using namespace std;

int main()
{
  int x;
  char str[101];
  
  cin>>x;
  cin.ignore(); //enter k ignore kore
  
  //cin>>str;
 // cout<<str<<endl; //space chara input
 
 // fgets(str, 101, stdin); enter input ney
 cin.getline(str, 101); //fgets er moto enter input ney
 cout<<x<<endl<<str<<endl;
  
  return 0;
}
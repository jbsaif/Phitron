#include <iostream>
using namespace std;

int main()
{
  
  int x;
  
  cin>>x;
  
  if(x>=18)
  {
    cout<<"You can Vote\n";
  }
  else if(x<18)
  {
    cout<<"You cannot Vote\n";
  }
  
  return 0;
}
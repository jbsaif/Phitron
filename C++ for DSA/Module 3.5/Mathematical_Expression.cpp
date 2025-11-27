#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int a, b, c;
  char s, q;
  
  cin>>a>>s>>b>>q>>c;
  
  if(s == '+')
  {
    int sum = a+b;
    if(sum == c)
    {
      cout<<"Yes"<<endl;
    }
    else{
       cout<<a+b<<endl;
    }
  }
  
  else if(s == '-')
  {
    int sub = a-b;
    if(sub == c)
    {
      cout<<"Yes"<<endl;
    }
    else{
       cout<<a-b<<endl;
    }
  }
  
  
  if(s == '*')
  {
    int mul = a*b;
    if(mul == c)
    {
      cout<<"Yes"<<endl;
    }
    else{
       cout<<a*b<<endl;
    }
  }
    
  return 0;
}
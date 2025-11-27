#include<bits/stdc++.h>
using namespace std;

class Bike{
  
  public:
  
  char color[100];
  int speed;
  double length;
  
};

int main()
{
  Bike honda, royal_enfield;
  
  cin.getline(honda.color,100);
  cin>>honda.speed>>honda.length;
  cin.ignore();
  cout<<honda.color<<" "<<honda.speed<<" "<<honda.length<<endl;
  
  cin.getline(royal_enfield.color, 100);
  cin>>royal_enfield.speed>>royal_enfield.length;
  
  cout<<royal_enfield.color<<" "<<royal_enfield.speed<<" "<<royal_enfield.length<<endl;
  
  return 0;
}
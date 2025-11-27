#include<bits/stdc++.h>
using namespace std;

class Student{
  public:
  char name[100];
  int roll;
  double gpa;
  
  Student(char* n, int r, double g) 
  {
    // name = n; hobe na first e initialize korte hobe
    strcpy(name, n);
    roll = r;
    gpa = g;
  }
};

int main()
{
  Student rahim("Rahim", 475, 3.68);
  Student karim("Karim", 456, 3.22);
  
  cout<<rahim.name<<" "<<rahim.roll<<" "<<rahim.gpa<<endl;
  cout<<karim.name<<" "<<karim.roll<<" "<<karim.gpa<<endl;
  
  return 0;
}
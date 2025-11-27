#include<bits/stdc++.h>
using namespace std;

class Student{
  public:
  int roll;
  int cls;
  double gpa;
  
  Student(int r,int c, double g) 
  {
    // name = n; hobe na first e initialize korte hobe
    roll = r;
    cls = c;
    gpa = g;
  }
};

int main()
{
  Student rahim(475, 5, 3.68);
  Student karim(456, 5, 3.22);
  
  cout<<rahim.roll<<" "<<rahim.cls<<" "<<rahim.gpa<<endl;
  cout<<karim.roll<<" "<<karim.cls<<" "<<karim.gpa<<endl;
  
  return 0;
}
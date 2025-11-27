#include<bits/stdc++.h>
using namespace std;

class Student{
  public:
  int roll;
  int cls;
  double gpa;
  
  Student(int roll,int cls, double gpa) 
  {
    // name = n; hobe na first e initialize korte hobe
   // (*this).roll = roll;
   // (*this).cls = cls;
    // (*this).gpa = gpa;
    
    this->roll = roll;
    this->cls = cls;
    this->gpa = gpa;
  }
};

int main()
{
  Student rahim(475, 7, 3.68);
  Student karim(456, 9, 3.22);
  
  cout<<rahim.roll<<" "<<rahim.cls<<" "<<rahim.gpa<<endl;
  cout<<karim.roll<<" "<<karim.cls<<" "<<karim.gpa<<endl;
  
  return 0;
}
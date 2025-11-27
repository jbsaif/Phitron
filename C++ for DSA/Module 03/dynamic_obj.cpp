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
  
  Student* karim = new Student(1, 12, 4.83);
  
  cout<<karim->roll<<" "<<karim->cls<<" "<<karim->gpa<<endl;
  
  return 0;
}
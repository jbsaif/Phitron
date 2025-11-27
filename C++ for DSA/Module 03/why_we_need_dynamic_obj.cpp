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

Student* fun()
{
  Student karim(2, 5, 5.00);
  Student *p = &karim;
  return p;
}
//will not work with pointer in static memory
//we need dynamic memory 
int main()
{
  
  Student * obj = fun();
  
  cout<<obj->roll<<" "<<obj->cls<<" "<<obj->gpa<<endl;
  
  return 0;
}
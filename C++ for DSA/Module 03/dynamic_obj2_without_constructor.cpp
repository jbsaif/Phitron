#include<bits/stdc++.h>
using namespace std;

class Student{
  public:
  int roll;
  int cls;
  double gpa;
};

int main()
{
  
  Student* karim = new Student();
  
  cin>>karim->roll>>karim->cls>>karim->gpa;
  
  cout<<karim->roll<<" "<<karim->cls<<" "<<karim->gpa<<endl;
  
  return 0;
}
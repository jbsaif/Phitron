#include <bits/stdc++.h>
using namespace std;

class Student{
  public:
  char name[100];
  int roll;
  char sec;
  int math_marks;
  int cls;
  
  Student(const char* name, int roll, char sec, int math_marks, int cls)
  {
    strcpy(this->name, name);
    this->roll = roll;
    this->sec = sec;
    this->math_marks = math_marks;
    this->cls = cls;
  }
};

int main()
{
  Student sakib("Sakib", 1, 'A', 80, 10);
  Student rakib("Rakib", 2, 'A', 81, 10);
  Student akib("Akib", 3, 'A', 83, 10);
  
  if(sakib.math_marks>rakib.math_marks && sakib.math_marks>akib.math_marks)
  {
       cout<<"Sakib"<<endl;
  }
  else if(rakib.math_marks> akib.math_marks && rakib.math_marks > sakib.math_marks)
  {
       cout<<"Rakib"<<endl;
  }
  else if(akib.math_marks> sakib.math_marks && akib.math_marks > rakib.math_marks)
  {
       cout<<"Akib"<<endl;
  }
  
  //cout<<rakib.math_marks<<endl;
  
  return 0;
}
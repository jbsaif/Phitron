#include <bits/stdc++.h>
using namespace std;

class Student{
  
  public:
  
  char name[100];
  int roll;
  double gpa;
  
};

int main() 
{
    Student a, b;
    
    char temp1[100] = "Junaeed Bin Saif";
    strcpy(a.name,temp1);
    a.roll = 475;
    a.gpa = 4.83;
    
    char temp2[100] = "Adiba Khatun";
    strcpy(b.name, temp2);
    b.roll = 474;
    b.gpa = 4.83;
    
    cout <<a.name<<'-'<<a.roll<<" "<<a.gpa<<endl;
    cout <<b.name<<'-'<<b.roll<<" "<<b.gpa<<endl;
    
    return 0;
}
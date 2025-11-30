#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int marks;
};

// bool cmp(Student l, Student r)
// {
//     if(l.marks>r.marks)
//     {
//         return true;
//     }
//     else if(l.marks<r.marks)
//     {
//         return false;
//     }
//     else{
//         if(l.roll<r.roll)
//         {
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// }
//does the same job
bool cmp(Student l, Student r)
{
    cout<<"Hello"<<endl; //dekhte je custom compare function koy bar call hoyeche
    if(l.marks == r.marks)
    {
        return l.roll<r.roll;
    }
    else{
        return l.marks>r.marks;
    }
}

int main()
{
    int n;
    cin>>n;
    
    Student a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i].name>>a[i].roll>>a[i].marks;
    }
    sort(a,a+n,cmp);
    for(int i=0; i<n; i++)
    {
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
    
    return 0;
}
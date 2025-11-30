#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int marks;
};
int main()
{
    // int n;
    // cin>>n;
    // Stduent arr[n];
    // for(int i=0; i<n; i++)
    // {
    //     cin>>arr[i].name>>arr[i].roll>>arr[i].marks;
    // }
    // for(int i=0; i<n; i++)
    // {
    //     cout<<arr[i].name<<" "<<arr[i].roll<<" "<<arr[i].marks;
    //     cout<<endl;
    // }

    int n;
    cin>>n;
    Student a[n];

    for(int i=0; i<n; i++)
    {
        cin.ignore();
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].marks;
    }

    for(int i=0; i<n; i++)
    {
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks;
        cout<<endl;
    }
    
    return 0;
}
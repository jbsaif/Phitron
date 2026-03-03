#include<bits/stdc++.h>
using namespace std;
void fun(int* &ptr)
{
    ptr = NULL;
}
int main()
{
    int x = 10;
    int* ptr = &x;
    fun(ptr);
    if(ptr == NULL)
    {
        cout<<"PTR is NULL"<<endl;
    }
    else{
        cout<<"In main: "<<*ptr<<endl;
    }
    return 0;
}
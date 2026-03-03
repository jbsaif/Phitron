#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x;
    cin>>x;
    if(x==0)
    {
        cout<<"0"<<endl;
    }
    long long int res = x/5; 
    long long int min_course = res/100;
    cout<<min_course<<endl;
    
    return 0;
}
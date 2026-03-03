#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int first_digit = n/100;
    int middle_digit = (n/10)%10;
    int last_digit = n%10;
    int res = 111*(first_digit+middle_digit+last_digit);
    cout<<res<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    int cnt_lucky = 0;
    while(n>0)
    {
        int last_digit = n%10;
        if(last_digit == 4 || last_digit == 7)
        {

            cnt_lucky++;
        }
        n = n/10;
    }
    if(cnt_lucky == 4 || cnt_lucky == 7)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
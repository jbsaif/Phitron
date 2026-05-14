#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    int ans = fact(n-1);
    return ans * n; 
}

int main()
{
   cout << fact(5) << endl;
   return 0;
}
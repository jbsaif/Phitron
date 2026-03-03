#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10,10,10,20,30,405,50,6,9,10};
    // l.remove(10);

    //Ascending Order

    // l.sort();

    //Descending Order

    // l.sort(greater<int>());
    // l.unique();
    l.reverse();
    for(int val : l)
    {
        cout<<val<<endl;
    }
    return 0;
}
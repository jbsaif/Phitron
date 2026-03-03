#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    while(true)
    {
        int x;
        cin>>x;
        if(x==-1)
        {
            break;
        }
        l.push_back(x);
    }

    list<int> org(l);

    l.reverse();
    
   if(org == l)
   {
    cout<<"YES"<<endl;
   }
   else
   {
    cout<<"NO"<<endl;
   }

    return 0;
}
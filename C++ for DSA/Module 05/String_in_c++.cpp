#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    THIS WAS NOT POSSIBLE IN CHARACTER ARRAY
    char s[101] = "Hello";
    s =  "Gello";

    BUT IT IS POSSIBLE IN STRING CLASS IN C++
    */
    string s = "Hello";
    s = "Gell0o"; // nijer moto string er space bariye ney
    string s2 = "Gello";
    if(s==s2)
    {
        cout<<"Same"<<endl;
    }else{
        cout<<"Same na"<<endl;
    }

    cout<<s<<endl;
    return 0;
}
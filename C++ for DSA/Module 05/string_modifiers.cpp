#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World";
    //string s2 = "Saif";
    // // s+=s2; //just like strcat of C
    // s.append(s2); //does the same job as s+=s2;
    // // s.push_back('A'); // ei kaj s+=s2 diyeo kora jabe
    // s+='A';
    // s.pop_back();
    // s.pop_back();
    // s.push_back('f');
    // s = "Junaeed";
    // s2 = "Saif";
    // //s = s2;
    // // s.assign(s2); // does the same thing as s=s2
    // s.assign("Junaeed Bin Saif");
    // // s.erase(7);
    // s.erase(7,4);
    // s.replace(6,5,"Bangladesh");
    s.insert(6,"Junaeed's ");
    cout<<s<<endl;
    return 0;
}
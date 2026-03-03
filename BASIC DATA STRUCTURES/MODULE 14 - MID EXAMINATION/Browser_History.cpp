#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<string> l;
    string s;
    while(cin>>s)
    {
        if(s == "end")
            break;
        l.push_back(s);
    }

    int q;
    cin>>q;
    auto cur = l.begin();
    while(q--)
    {   
        string command;
        cin>>command;

        if(command == "visit")
        {
            string adress;
            cin>>adress;
            auto it = find(l.begin(), l.end(), adress);

            if(it == l.end())
            {
                cout<<"Not Available"<<endl;
            }
            else{
                cur = it;
                cout<<*cur<<endl;
            }
        }
        else if(command == "next")
        {
            auto tmp = cur;
            tmp++;
            if(tmp == l.end())
            {
                cout<<"Not Available"<<endl;
            }
            else{
                cur = tmp;
                cout<<*cur<<endl;
            }
        }
        else if(command == "prev")
        {
            auto tmp = cur;
            if(tmp == l.begin())
            {
                cout<<"Not Available"<<endl;
            }
            else{
                tmp--;
                cur = tmp;
                cout<<*tmp<<endl;
            }
        }

    }

    return 0;
}
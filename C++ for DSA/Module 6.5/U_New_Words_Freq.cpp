#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int fre[26] = {0};
    for(int i=0; i<s.size(); i++)
    {
        char ch = s[i];
        ch = tolower(ch);
        if(ch == 'e')
        {
            int idx = ch - 'a';
            fre[idx]++;
        }
        else if(ch == 'g')
        {
            int idx = ch - 'a';
            fre[idx]++;
        }
        else if(ch == 'y')
        {
            int idx = ch - 'a';
            fre[idx]++;
        }
        else if(ch == 'p')
        {
            int idx = ch - 'a';
            fre[idx]++;
        }
        else if(ch == 't')
        {
            int idx = ch - 'a';
            fre[idx]++;
        }

    }
    int mn = INT_MAX;
    for(int i=0; i<26; i++)
    {
        if(fre[i]>0)
        {
            mn = min(mn, fre[i]);
        }
    }
    cout<<mn<<endl;
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt_e = 0;
    int cnt_g = 0;
    int cnt_y = 0;
    int cnt_p = 0;
    int cnt_t = 0;
    for(int i=0; i<s.size(); i++)
    {
        char ch = s[i];
        if(ch == 'e' || ch == 'E')
        {
            cnt_e++;
        }
        else if(ch == 'g' || ch == 'G')
        {
            cnt_g++;
        }
        else if(ch == 'y' || ch == 'Y')
        {
            cnt_y++;
        }
        else if(ch == 'p' || ch == 'P')
        {
            cnt_p++;
        }
        else if(ch == 't' || ch == 'T')
        {
            cnt_t++;
        }

    }
    cout<<min({cnt_e, cnt_g, cnt_y, cnt_p, cnt_t})<<endl;
    
    return 0;
}
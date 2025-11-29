#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        int fre[26]={false};
        int ballons = 0;

        for(int i=0; i<n; i++)
        {
            char ch = s[i];
            int idx = ch - 'A';

            if(fre[idx] == false)
            {
                ballons+=2;
                fre[idx] = true;
            }
            else{
                ballons++;
            }

        }

        cout<<ballons<<endl;

    }
    
    return 0;
}
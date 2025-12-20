#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string s;
        getline(cin, s);
        
        int idx = s.find("W W W");
        bool found = false;
        
        while(idx != -1)
        {
            found = true;
            // break;  // Found at least one occurrence
            
            // If you want to find all occurrences, use:
            idx = s.find("W W W", idx + 1);
        }
        
        if(found)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
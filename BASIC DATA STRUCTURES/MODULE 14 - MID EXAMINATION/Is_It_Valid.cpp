#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<int> st;
        for (int i = 0; i < s.size(); i++)
        {
            st.push(s[i] - '0');
        }
        stack<int> st2;
        while (!st.empty())
        {
            if (st2.empty())
            {
                st2.push(st.top());
                st.pop();
            }
            else if ((st.top() == 1 && st2.top() == 0) || (st.top() == 0 && st2.top() == 1))
            {
                st2.pop();
                st.pop();
            }
            else
            {
                st2.push(st.top());
                st.pop();
            }
        }
        if (st2.size() == 0)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
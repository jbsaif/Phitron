#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    int n;
    cin>>n;
    for(int i=0;i<n; i++)
    {
        int val;
        cin>>val;
        q.push(val);
    }
    stack<int> st;
    int val;
    while(!q.empty())
    {
        val = q.front();
        q.pop();
        st.push(val);
        if(q.empty() == true)
        {
            break;
        }
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}
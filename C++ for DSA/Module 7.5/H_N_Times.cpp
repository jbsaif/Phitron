#include <bits/stdc++.h>
using namespace std;
void print_func(int n, char ch)
{
    for (int i = 0; i < n; i++)
    {
        cout << ch << " ";
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char ch;
        cin >> n >> ch;
        print_func(n, ch);
        cout<<endl;
    }

    return 0;
}
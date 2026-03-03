#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    if (n <= 999)
    {
        cout << n << endl;
    }
    else if (n >= 1000 && n <= 9999)
    {
        int last = n % 10;
        n = n - last;
        cout << n << endl;
    }
    else if (n >= 10000 && n <= 99999)
    {
        int last = n % 100;
        n = n - last;
        cout << n << endl;
    }
    else if (n >= 100000 && n <= 999999)
    {
        int last = n % 1000;
        n = n - last;
        cout << n << endl;
    }
    else if (n >= 1000000 && n <= 9999999)
    {
        int last = n % 10000;
        n = n - last;
        cout << n << endl;
    }
    else if (n >= 10000000 && n <= 99999999)
    {
        int last = n % 100000;
        n = n - last;
        cout << n << endl;
    }
    else if (n >= 100000000 && n <= 999999999)
    {
        int last = n % 1000000;
        n = n - last;
        cout << n << endl;
    }
    else
    {
        cout << n << endl;
    }

    return 0;
}

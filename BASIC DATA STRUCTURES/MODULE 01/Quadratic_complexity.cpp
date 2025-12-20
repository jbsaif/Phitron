//O(n^2)
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int var = 1;

    for(int i = 0; i < n; i++) //O(n)
    {
        for(int j = 0; j < n; j++) //O(n)
        {
            cout << var << " " << "Hello" << endl;
            var++;
        }
    }
    return 0;
}

/*
Complexty:
        => O(n) * O(n)
        => O(n*n)
        => O(n^2)

        nested loop er khetre hocche Quadratic Complexity hoye thake
*/

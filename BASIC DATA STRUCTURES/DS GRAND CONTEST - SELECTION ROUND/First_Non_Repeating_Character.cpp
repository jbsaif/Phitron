#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int sz = s.size();
    int freq[26] = {0};

    for (int i = 0; i < sz; i++) {
        char ch = s[i];
        freq[(int)ch - 'a']++;
    }

    bool found = false;
    for (int i = 0; i < sz; i++) {
        char ch = s[i];
        if (freq[(int)ch-'a'] == 1) {
            cout <<ch<< endl;
            found = true;
            break; 
        }
    }
    if (!found) {
        cout << -1 << endl;
    }

    return 0;
}

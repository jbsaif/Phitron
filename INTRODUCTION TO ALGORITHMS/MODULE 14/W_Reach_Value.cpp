#include <bits/stdc++.h>
using namespace std;

bool canReach(long long n) {
    if (n == 1) {
        return true;
    }
    
    bool possible = false;
    
    if (n % 10 == 0) {
        possible = possible || canReach(n / 10);
    }
    
    if (n % 20 == 0) {
        possible = possible || canReach(n / 20);
    }
    
    return possible;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long n;
        cin >> n;
        
        if (canReach(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
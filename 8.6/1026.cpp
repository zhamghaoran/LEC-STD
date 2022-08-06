#include "bits/stdc++.h"
using namespace std;
bool pd(int x) {
    int y = x;
    int x1 = x % 10;
    x /= 10;
    int x2 = x % 10;
    x /= 10;
    int x3 = x % 10;
    if (x1 * x1 * x1 + x2 * x2 * x2 + x3 * x3 * x3 == y)
        return true;
    return false;
}
int main() {

    for(int i = 100;i <= 999;i ++) {
        if (pd(i))
            cout<<i<<"\n";
    }
    return 0;
}

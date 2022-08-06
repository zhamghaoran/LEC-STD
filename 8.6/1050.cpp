#include <bits/stdc++.h>
using namespace std;
bool pd (int x) {
    int num[10010];
    int i = 1;
    while (x) {
        num[i ++] = x % 10;
        x /= 10;
    }
    for(int j = 1,x = i - 1;j <= x;j ++,x --) {
        if (num[j] != num[x])
            return false;
    }
    return true;
}
int main() {
    int a = 95860;
    while (1) {
        if (pd(a) == true) {
            cout<<a;
            break;
        }
        else
            a ++;
    }
    return 0;
}
#include <iostream>
using namespace std;

void identice(int a, int b) {
    for(int i = a; i <= b; i++) {
        int c = i, ok = 1;
        int uc = c % 10;
        while(c) {
            if(c % 10 != uc) {
                ok = 0;
            }
            c = c / 10;
        }
        if(ok) {
            cout << i << " ";
        }
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    identice(a, b);
    return 0;
}

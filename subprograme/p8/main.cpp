#include <iostream>
using namespace std;

void numar(int n, int c, int &m) {
    m = 0;
    int p = 1;
    while(n) {
        if(n % 10 != 0) {
            if(n % 10 != c) {
                m = m + (n % 10) * p;
                p = p * 10;
            }
        }
        n = n / 10;
    }
}

int main() {
    int n, c, m;
    n = 55, c = 5;
    numar(n, c, m);
    cout << m << endl;
}
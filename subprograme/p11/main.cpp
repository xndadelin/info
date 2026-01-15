#include <iostream>
using namespace std;

void secventa(int &n){
    int c = n, p = 1, m = 0;
    while(c) {
        if(c % 100 == 22) {
            m = m + 20 * p;
            p = p * 100;
            c = c / 100;
        }
        else {
            m = m + (c % 10) * p;
            p = p * 10;
            c = c / 10;
        }
    }
    n = m;
}

int main() {
    int n;
    cin >> n;
    secventa(n);
    cout << n << endl;
    return 0;
}
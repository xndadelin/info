#include <iostream>
using namespace std;

void nrfp(int n, int &m) {
    int max_factori = 0, numar_max = 0;
    for(int i = 2; i <= n; i++) {
        int contor = 0;
        int x = i;
        int d = 2;
        while(x > 1) {
            if(x % d == 0) {
                while(x % d == 0) {
                    x = x / d;
                }
                contor++;
            }
            d++;
        }
        if(contor > max_factori) {
            max_factori = contor;
            numar_max = i;
        } else if(contor == max_factori && i > numar_max) {
            numar_max = i;
        }
    }
    m = numar_max;
}

int main() {
    int n, m;
    n = 100;
    nrfp(n, m);
    cout << m << endl;
}
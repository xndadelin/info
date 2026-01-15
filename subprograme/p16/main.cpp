#include <iostream>
using namespace std;

int sPar(int n){
    while(true) {
        int suma_d = 0, d = 2;
        while(d * d <= n) {
            if (n % d == 0) {
                suma_d += d;
                if(d * d != n) {
                    suma_d += n / d;
                }
            }
            d++;    
        }
        if(suma_d % 2 == 0 && n % 2 == 0) {
            return n;
        }
        n++;
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int rezultat = sPar(n);
    cout << "The smallest even perfect number greater than or equal to " << n << " is: " << rezultat << endl;
    return 0;
}
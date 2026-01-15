#include <iostream>
using namespace std;

int cifreImpare(int n) {
    int p = 1, m = 0, c = n;
    while(c) {
        int uc = c % 10;
        if(uc % 2 == 0) {
            m += p * uc;
            p = p * 10;
        }
        c /= 10;
    }
    if(n == m) return -1;
    else return m;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int rezultat = cifreImpare(n);
    if(rezultat == -1) {
        cout << "All digits are odd." << endl;
    } else {
        cout << "Number after removing odd digits: " << rezultat << endl;
    }
    return 0;
}
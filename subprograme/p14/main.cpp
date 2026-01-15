#include <iostream>
using namespace std;

int nrDiv(int a, int b) {
    int cnt  = 0;
    for(int i = a; i <= b; i++) {
        for(int j = 1; j <= i; j++) {
            if(j * (j + 1) == i) {
                cout << i << " ";
                cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    int a, b;
    cout << "Enter the range (a b): ";
    cin >> a >> b;
    cout << "Number of triangular numbers in range: " << nrDiv(a, b) << endl;
    return 0;
}
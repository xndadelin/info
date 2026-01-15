#include <iostream>
using namespace std;

void interval(int n, int &a, int &b) {
    int f1 = 1, f2 = 1;
    for(int i = 2; i <= n - 1; i++) 
       f1 = f1 * i;

    for(int i = 2; i <= n + 1; i++) 
       f2 = f2 * i;

    a = f1 + 1;
    b = f2 - 1;

}

int main() {
    int a, b;
    interval(3, a, b);
    cout << "Interval: [" << a << ", " << b << "]" << endl;
    return 0;
}
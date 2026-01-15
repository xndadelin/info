#include <iostream>
using namespace std;

void Putere(int n, int &x, int &p) {
    int ok = 0; p = 0;
    for(int i = 2; i <= n && !ok; i++) {
        int cnt = 0, c = n;
        while(c % i == 0) {
            cnt++;
            c = c / i;
        }
        if(c == 1) {
            ok = 1;
            x = i;
            p = cnt;
        }
    }
}

int main() {
    int n, x, p;
    cin >> n;
    Putere(n, x, p);
    cout << x << " " << p << endl;
    return 0;
}
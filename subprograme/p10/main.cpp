#include <iostream>
using namespace std;

void rest(int x, int y, int n, int &k) {
    int ok = 0;
    for(int i = n; i >= 1 && !ok; i--) {
        if(i % x == 2 && i % y == 2) {
            ok = 1;
            k = i;
        }
    }
    if(!ok){
        k = 0;
    }
}

int main() {
    int x, y, n, k;
    cin >> x >> y >> n;
    rest(x, y, n, k);
    cout << k << endl;
    return 0;
}
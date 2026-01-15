#include <iostream>
using namespace std;

int sub(int n, int v[], int k) {
    int cnt = 0, s = 0;
    for(int i = 0; i < n; i++) {
        if(v[i] % 2 == 1) {
            s = s + v[i];
            cnt++;
            if(cnt == k) {
                return s;
            }
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int v[100];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int k;
    cout << "Enter k: ";
    cin >> k;
    int rezultat = sub(n, v, k);
    if(rezultat == -1) {
        cout << "There are less than k odd numbers in the array." << endl;
    } else {
        cout << "Sum of the first " << k << " odd numbers: " << rezultat << endl;
    }
    return 0;
}
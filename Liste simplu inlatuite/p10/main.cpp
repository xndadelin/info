#include <iostream>
#include <cstring>
using namespace std;

struct nod {
    char *cuvant;
    nod *urm;
};

int main() {
    nod *prim = nullptr, *ultim = nullptr, *nou;
    prim = new nod;
    prim -> urm = NULL;
    ultim = prim;
    char cuvinte[100][21];
    char *cuvant = new char[21];
    int n, k = 0;
    cin >> n;
    while (n) {
        cin >> cuvant;
        strcpy(cuvinte[k], cuvant);
        cuvinte[k][strlen(cuvant)] = '\0';
        k++;
        n--;
    }
    for(int i = k - 1; k >= 0; k--) {
        if(cuvinte[k][0] == cuvinte[k][strlen(cuvinte[k]) - 1]) {
            nou = new nod;
            nou -> cuvant = new char[strlen(cuvinte[k])];
            strcpy(nou -> cuvant, cuvinte[k]);
            nou -> urm = NULL;
            ultim -> urm = nou;
            ultim = nou;
        }

    }

    prim = prim -> urm;
    while(prim) {
        cout << prim -> cuvant << " ";
        prim = prim -> urm;
    }

    return 0;
}
